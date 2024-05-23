#pragma once
#include "Framework/game.h"
#include "Context/StreetLightMachine.h"
#include "States/GreenState.h"
#include "States/RedState.h"
#include "States/YellowState.h"

class Program : public vl::Game
{
private:
	bool initalized = false;
	float automaticStateChange = 3.0f;
	StreetLightMachine* lightManager = new StreetLightMachine(new RedState);
public:
	virtual void Initialize() override;
	virtual void Shutdown() override;
	virtual void Update() override;
	virtual void Draw(vl::Renderer& renderer) override;
	virtual void ManualChangeState();
	std::string GetCurrentState();
	vl::Scene* GetScene();
};