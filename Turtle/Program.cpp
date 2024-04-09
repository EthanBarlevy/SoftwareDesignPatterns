#include "Program.h"
#include "engine.h"

void Program::Initialize()
{
	m_scene = std::make_unique<vl::Scene>();
	rapidjson::Document document;
	std::vector<std::string> sceneNames = { "Scenes/prefabs.txt"};

	for (auto sceneName : sceneNames)
	{
		bool sucess = vl::json::Load(sceneName, document);
		if (!sucess) { LOG("Error loading scene %s", sceneName.c_str()); continue; }

		m_scene->Read(document);
	}
	m_scene->Initialize();
	// i really hope this doesnt break
	if (!initalized)
	{
		auto player = vl::Factory::Instance().Create<vl::Actor>("Turtle");
		player->Initialize();

		m_scene->Add(std::move(player));
		initalized = true;
	}
}

void Program::Shutdown()
{
	m_scene->RemoveAll();
}

void Program::Update()
{
	m_scene->Update();
}

void Program::Draw(vl::Renderer& renderer)
{
	m_scene->Draw(vl::g_renderer);
}

vl::Scene* Program::GetScene()
{
	return m_scene.get();
}
