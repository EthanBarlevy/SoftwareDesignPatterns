#include "engine.h"
#include "Program.h"
#include "Client/CommandPanel.h"
#include "Recievers/Turtle.h"
#include "Commands/ChangeTurtleColor.h"
#include "Commands/MoveTurtleUp.h"
#include "Commands/MoveTurtleDown.h"
#include "Commands/MoveTurtleLeft.h"
#include "Commands/MoveTurtleRight.h"
#include "Invoker/Button.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	// the actual code
	vl::InitializeMemory();
	vl::SetFilePath("../Assets");

	// initialize engine
	vl::g_renderer.Initialize();
	vl::g_inputSystem.Initialize();
	vl::g_audioSystem.Initialize();
	vl::g_resourceManager.Initialize();
	vl::g_physicsSystem.Initialize();
	vl::g_eventManager.Initialize();

	vl::Engine::Instance().Register();

	// create window
	vl::g_renderer.CreateWindow("Command Pattern", 500, 500);
	vl::g_renderer.setClearColor(vl::Color{ 255, 255, 255, 255 });

	std::unique_ptr<Program> program = std::make_unique<Program>();
	program->Initialize();

	ITurtle* turtleControls = CommandPanel::GetTurtle();
	dynamic_cast<Turtle*>(turtleControls)->SetActor(program->GetScene());

	MoveTurtleUp* moveUp = new MoveTurtleUp(turtleControls);
	MoveTurtleDown* moveDown = new MoveTurtleDown(turtleControls);
	MoveTurtleLeft* moveLeft = new MoveTurtleLeft(turtleControls);
	MoveTurtleRight* moveRight = new MoveTurtleRight(turtleControls);
	ChangeTurtleColor* changeToRed = new ChangeTurtleColor(turtleControls, {255, 0, 0, 255});
	ChangeTurtleColor* changeToGreen = new ChangeTurtleColor(turtleControls, {0, 255, 0, 255});
	ChangeTurtleColor* changeToYellow = new ChangeTurtleColor(turtleControls, {255, 255, 0, 255});
	ChangeTurtleColor* changeToBlue = new ChangeTurtleColor(turtleControls, {0, 0, 255, 255});

	Button* button = new Button();

	{
		bool quit = false;
		bool action = true;
		while (!quit)
		{
			// update
			vl::g_time.Tick();
			vl::g_inputSystem.Update();
			vl::g_audioSystem.Update();
			vl::g_physicsSystem.Update();
			vl::g_eventManager.Update();

			if (vl::g_inputSystem.GetKeyDown(vl::key_escape)) quit = true;
			// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- COMMANDS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
			if (vl::g_inputSystem.GetKeyDown(vl::key_left))
			{
				if (action)
				{
					button->AddCommand(moveLeft);
					button->Press();
					action = false;
				}
			}
			if (vl::g_inputSystem.GetKeyDown(vl::key_right))
			{
				if (action)
				{
					button->AddCommand(moveRight);
					button->Press();
					action = false;
				}
			}
			if (vl::g_inputSystem.GetKeyDown(vl::key_up))
			{
				if (action)
				{
					button->AddCommand(moveUp);
					button->Press();
					action = false;
				}
			}
			if (vl::g_inputSystem.GetKeyDown(vl::key_down))
			{
				if (action)
				{
					button->AddCommand(moveDown);
					button->Press();
					action = false;
				}
			}
			if (vl::g_inputSystem.GetKeyDown(vl::key_w))
			{
				if (action)
				{
					button->AddCommand(changeToBlue);
					button->Press();
					action = false;
				}
			}
			if (vl::g_inputSystem.GetKeyDown(vl::key_a))
			{
				if (action)
				{
					button->AddCommand(changeToRed);
					button->Press();
					action = false;
				}
			}
			if (vl::g_inputSystem.GetKeyDown(vl::key_d))
			{
				if (action)
				{
					button->AddCommand(changeToGreen);
					button->Press();
					action = false;
				}
			}
			if (vl::g_inputSystem.GetKeyDown(vl::key_s))
			{
				if (action)
				{
					button->AddCommand(changeToYellow);
					button->Press();
					action = false;
				}
			}
			if (vl::g_inputSystem.GetKeyDown(vl::key_space))
			{
				if (action)
				{
					button->UndoPress();
					action = false;
				}
			}
			if (vl::g_inputSystem.GetKeyState(vl::key_left) == vl::g_inputSystem.Idle
				&& vl::g_inputSystem.GetKeyState(vl::key_right) == vl::g_inputSystem.Idle
				&& vl::g_inputSystem.GetKeyState(vl::key_up) == vl::g_inputSystem.Idle
				&& vl::g_inputSystem.GetKeyState(vl::key_down) == vl::g_inputSystem.Idle
				&& vl::g_inputSystem.GetKeyState(vl::key_w) == vl::g_inputSystem.Idle
				&& vl::g_inputSystem.GetKeyState(vl::key_a) == vl::g_inputSystem.Idle
				&& vl::g_inputSystem.GetKeyState(vl::key_s) == vl::g_inputSystem.Idle
				&& vl::g_inputSystem.GetKeyState(vl::key_d) == vl::g_inputSystem.Idle
				&& vl::g_inputSystem.GetKeyState(vl::key_space) == vl::g_inputSystem.Idle)
			{
				action = true;
			}


			program->Update();

			//render
			vl::g_renderer.BeginFrame();

			program->Draw(vl::g_renderer);

			vl::g_renderer.EndFrame();
		}
	}
	program->Shutdown();
	program.reset(); // essentially the same as calling delete on a normal pointer

	vl::Factory::Instance().Shutdown();
	// technically these should also be singletons but i am to lazy to fix it
	vl::g_inputSystem.Shutdown();
	vl::g_renderer.Shutodwn();
	vl::g_audioSystem.Shutdown();
	vl::g_resourceManager.Shutodwn();
	vl::g_physicsSystem.Shutdown();
	vl::g_eventManager.Shutdown();
}