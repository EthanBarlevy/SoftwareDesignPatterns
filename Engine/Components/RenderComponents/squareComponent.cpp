#include "squareComponent.h"
#include "Framework/actor.h"

bool vl::SquareComponent::Write(const rapidjson::Value& value) const
{
    return false;
}

bool vl::SquareComponent::Read(const rapidjson::Value& value)
{
    return false;
}

void vl::SquareComponent::Update()
{
}

void vl::SquareComponent::Draw(Renderer& renderer)
{
}
