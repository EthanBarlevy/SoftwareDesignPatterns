#include "Program.h"
#include "engine.h"

void Program::Initialize()
{
	m_scene = std::make_unique<vl::Scene>();

	// load from json file to scene
	// REPLACE WHEN I KNOW WHAT IM DOING
	//rapidjson::Document document;
	//std::vector<std::string> sceneNames = { "Scenes/prefabs.txt", "Scenes/tilemap.txt", "Scenes/level.txt" };

	//for (auto sceneName : sceneNames)
	//{
	//	bool sucess = vl::json::Load(sceneName, document);
	//	if (!sucess) { LOG("Error loading scene %s", sceneName.c_str()); continue; }

	//	m_scene->Read(document);
	//}

	m_scene->Initialize();
}

void Program::Shutdown()
{
	m_scene->RemoveAll();
}

void Program::Update()
{
	// add my things here
	m_scene->Update();
}

void Program::Draw(vl::Renderer& renderer)
{
	m_scene->Draw(vl::g_renderer);
}
