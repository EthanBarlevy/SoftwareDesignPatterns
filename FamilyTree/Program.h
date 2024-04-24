#pragma once
#include "Framework/game.h"

class Program : public vl::Game
{
private:
	bool initalized = false;
public:
	virtual void Initialize() override;
	virtual void Shutdown() override;
	virtual void Update() override;
	virtual void Draw(vl::Renderer& renderer) override;
	vl::Scene* GetScene();
};