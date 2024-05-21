#include "circleComponent.h"
#include "Framework/actor.h"

bool vl::CircleComponent::Write(const rapidjson::Value& value) const
{
    return false;
}

bool vl::CircleComponent::Read(const rapidjson::Value& value)
{
    READ_DATA(value, color);
    READ_DATA(value, radius);

    return true;
}

void vl::CircleComponent::Update()
{
    //
}

void vl::CircleComponent::Draw(Renderer& renderer)
{
    g_renderer.DrawCircle(m_owner->GetTransform().position, radius, color);
}

void vl::CircleComponent::ChangeColor(Color& newColor)
{
    color = newColor;
}
