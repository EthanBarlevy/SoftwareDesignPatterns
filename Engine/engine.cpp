#include "engine.h"

namespace vl
{
	InputSystem g_inputSystem;
	Renderer g_renderer;
	Time g_time;
	AudioSystem g_audioSystem;
	ResourceManager g_resourceManager;
	PhysicsSystem g_physicsSystem;
	EventManager g_eventManager;

	void Engine::Register()
	{
		REGISTER_CLASS(Actor);
		REGISTER_CLASS(AudioComponent);
		REGISTER_CLASS(ModelComponent);
		REGISTER_CLASS(PhysicsComponent);
		REGISTER_CLASS(RBPhysicsComponent);
		REGISTER_CLASS(CollisionComponent);
		REGISTER_CLASS(SpriteComponent);
		REGISTER_CLASS(PlayerComponent);
		REGISTER_CLASS(SpriteAnimComponent);
		REGISTER_CLASS(TextComponent);
		REGISTER_CLASS(TilemapComponent);
		REGISTER_CLASS(CameraComponent);
		REGISTER_CLASS(SquareComponent);
		REGISTER_CLASS(CircleComponent);
		REGISTER_CLASS(LineComponent);
	}
}