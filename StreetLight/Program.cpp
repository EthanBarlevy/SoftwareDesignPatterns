#include "Program.h"
#include "engine.h"

void Program::Initialize()
{

	m_scene = std::make_unique<vl::Scene>();

	// load from json file to scene
	rapidjson::Document document;
	std::vector<std::string> sceneNames = { "Scenes/prefabs.txt" };

	for (auto sceneName : sceneNames)
	{
		bool sucess = vl::json::Load(sceneName, document);
		if (!sucess) { LOG("Error loading scene %s", sceneName.c_str()); continue; }

		m_scene->Read(document);
	}

	m_scene->Initialize();

	if (!initalized)
	{
		auto RedLight = vl::Factory::Instance().Create<vl::Actor>("RedLight");
		auto YellowLight = vl::Factory::Instance().Create<vl::Actor>("YellowLight");
		auto GreenLight = vl::Factory::Instance().Create<vl::Actor>("GreenLight");

		YellowLight.get()->GetTransform().position.y = 210;
		GreenLight.get()->GetTransform().position.y = 320;

		RedLight->Initialize();
		YellowLight->Initialize();
		GreenLight->Initialize();

		m_scene->Add(std::move(RedLight));
		m_scene->Add(std::move(YellowLight));
		m_scene->Add(std::move(GreenLight));
		initalized = true;
	}
}

void Program::Shutdown()
{
	m_scene->RemoveAll();
}

void Program::Update()
{
	automaticStateChange -= vl::g_time.deltaTime;
	auto greenLight = m_scene->GetActorFromName<vl::Actor>("GreenLight")->GetComponent<vl::CircleComponent>();
	auto yellowLight = m_scene->GetActorFromName<vl::Actor>("YellowLight")->GetComponent<vl::CircleComponent>();
	auto redLight = m_scene->GetActorFromName<vl::Actor>("RedLight")->GetComponent<vl::CircleComponent>();
	vl::Color gray = { 100, 100, 100, 255 };
	vl::Color green = { 0, 255, 0, 255 };
	vl::Color yellow = { 255, 255, 0, 255 };
	vl::Color red = { 255, 0, 0, 255 };

	if (automaticStateChange <= 0)
	{
		lightManager->NextState();
		automaticStateChange = 3;
	}
	auto state = lightManager->GetCurrentState();
	if (state == "Green")
	{
		greenLight->ChangeColor(green);
		yellowLight->ChangeColor(gray);
		redLight->ChangeColor(gray);
	}
	else if (state == "Yellow")
	{
		greenLight->ChangeColor(gray);
		yellowLight->ChangeColor(yellow);
		redLight->ChangeColor(gray);
	}
	else if (state == "Red")
	{
		greenLight->ChangeColor(gray);
		yellowLight->ChangeColor(gray);
		redLight->ChangeColor(red);
	}
	m_scene->Update();
}

void Program::Draw(vl::Renderer& renderer)
{
	m_scene->Draw(vl::g_renderer);
}

void Program::ManualChangeState()
{
	lightManager->NextState();
	automaticStateChange = 3;
}

std::string Program::GetCurrentState()
{
	return lightManager->GetCurrentState();
}
