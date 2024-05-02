#include "Program.h"
#include "engine.h"
#include "Composite/FamilyGroup.h"
#include "Leaf/FamilyMember.h"

std::vector<std::string> split(std::string text, std::string deliminator)
{
	int deliminatorPosition = text.find(deliminator);
	std::string tex = text;
	std::vector<std::string> bits;
	while (deliminatorPosition != std::string::npos)
	{
		std::string sub = tex.substr(0, deliminatorPosition);
		bits.push_back(sub);
		tex = tex.substr(deliminatorPosition);
		deliminatorPosition = tex.find(deliminator);
	}
	return bits;
}

void Program::Initialize()
{
	m_scene = std::make_unique<vl::Scene>();
	rapidjson::Document document;
	std::vector<std::string> sceneNames = { "Scenes/iteratorPrefabs.txt" };

	for (auto sceneName : sceneNames)
	{
		bool sucess = vl::json::Load(sceneName, document);
		if (!sucess) { LOG("Error loading scene %s", sceneName.c_str()); continue; }

		m_scene->Read(document);
	}
	m_scene->Initialize();

	IFamilyGroup* ethan = new FamilyGroup("Ethan Barlevy", "2003");
		IFamilyGroup* al = new FamilyGroup("Alon Barlevy", "1969");
			al->Add(new FamilyMemeber("Rami Barlevy", "1943"));
			al->Add(new FamilyMemeber("Relena Barlevy", "1947"));
		IFamilyGroup* nina = new FamilyGroup("Nina Barlevy", "1972");
			nina->Add(new FamilyMemeber("Ella Northup", "1950"));
			nina->Add(new FamilyMemeber("John Northup", "1945"));
		ethan->Add(al);
		ethan->Add(nina);
	std::string family = ethan->GetName("");
	std::cout << family;

	// i really hope this doesnt break
	if (!initalized)
	{
		std::vector<std::string> members = split(family, "\n");
		int count = 0;
		for (auto member : members)
		{
			if (member.size() > 0)
			{
				auto node = vl::Factory::Instance().Create<vl::Actor>("Node");
				node->Initialize();

				node->GetComponent<vl::TextComponent>()->SetText(member);
				node->GetTransform().position.y += count * 20;

				m_scene->Add(std::move(node));
				count++;
			}
		}

		
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
