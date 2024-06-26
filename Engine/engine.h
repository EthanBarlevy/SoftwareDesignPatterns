#pragma once

#include "Serialization/json.h"

#include "Core/memory.h"
#include "Core/file.h"
#include "Core/time.h"
#include "Core/logger.h"

#include "Math/mathUtils.h"
#include "Math/random.h"

#include "Input/inputSystem.h"

#include "Audio/audioSystem.h"

#include "Resource/resourceManager.h"

#include "Physics/physicsSystem.h"

#include "Framework/scene.h"
#include "Framework/game.h"
#include "Framework/singleton.h"
#include "Framework/factory.h"
#include "Framework/EventManager.h"

#include "Renderer/renderer.h"
#include "Renderer/model.h"
#include "Renderer/font.h"
#include "Renderer/text.h"
#include "Renderer/texture.h"

#include "Components/playerComponent.h"
#include "Components/RenderComponents/spriteComponent.h"
#include "Components/RenderComponents/spriteAnimComponent.h"
#include "Components/RenderComponents/modelComponent.h"
#include "Components/RenderComponents/textComponent.h"
#include "Components/RenderComponents/squareComponent.h"
#include "Components/RenderComponents/circleComponent.h"
#include "Components/RenderComponents/LineComponent.h"
#include "Components/tilemapComponent.h"
#include "Components/audioComponent.h"
#include "Components/physicsComponent.h"
#include "Components/rbPhysicsComponent.h"
#include "Components/collisionComponent.h"
#include "Components/characterComponent.h"
#include "Components/cameraComponent.h"

#include <memory>
#include <vector>
#include <variant>


namespace vl
{
	extern InputSystem g_inputSystem;
	extern Renderer g_renderer;
	extern Time g_time;
	extern AudioSystem g_audioSystem;
	extern ResourceManager g_resourceManager;
	extern PhysicsSystem g_physicsSystem;
	extern EventManager g_eventManager;

	class Engine : public Singleton<Engine>
	{
	public:
		void Register();
	};
}
