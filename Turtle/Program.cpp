#include "Program.h"
#include "engine.h"

void Program::Initialize()
{
	m_scene = std::make_unique<vl::Scene>();
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
