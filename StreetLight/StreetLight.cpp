#include "engine.h"
#include "Program.h"
#include <iostream>

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
	vl::g_renderer.CreateWindow("Street Lights", 500, 500);
	vl::g_renderer.setClearColor(vl::Color{ 255, 255, 255, 255 });

	std::unique_ptr<Program> program = std::make_unique<Program>();
	program->Initialize();

	{
		bool quit = false;
		bool action = true;
		bool hasinputted = false;
		while (!quit)
		{
			// update
			vl::g_time.Tick();
			vl::g_inputSystem.Update();
			vl::g_audioSystem.Update();
			vl::g_physicsSystem.Update();
			vl::g_eventManager.Update();

			if (vl::g_inputSystem.GetKeyDown(vl::key_escape)) quit = true;

			if (vl::g_inputSystem.GetKeyDown(vl::key_space) && !hasinputted)
			{
				program->ManualChangeState();
				hasinputted = true;
			}
			if (vl::g_inputSystem.GetKeyDown(vl::key_a)) // go to red
			{
				if (program->GetCurrentState() == "Yellow") program->ManualChangeState();
			}
			if (vl::g_inputSystem.GetKeyDown(vl::key_s)) // go to yellow
			{
				if (program->GetCurrentState() == "Green") program->ManualChangeState();
			}
			if (vl::g_inputSystem.GetKeyDown(vl::key_d)) // go to green
			{
				if (program->GetCurrentState() == "Red") program->ManualChangeState();
			}

			if (vl::g_inputSystem.GetKeyState(vl::key_space) == vl::g_inputSystem.Released)
			{
				hasinputted = false;
			}


			program->Update();

			//render
			vl::g_renderer.BeginFrame();

			program->Draw(vl::g_renderer);

			vl::g_renderer.EndFrame();
		}
	}
	program->Shutdown();
	program.reset();

	vl::Factory::Instance().Shutdown();
	// technically these should also be singletons but i am to lazy to fix it
	vl::g_inputSystem.Shutdown();
	vl::g_renderer.Shutodwn();
	vl::g_audioSystem.Shutdown();
	vl::g_resourceManager.Shutodwn();
	vl::g_physicsSystem.Shutdown();
	vl::g_eventManager.Shutdown();
}