#include "squareComponent.h"
#include "Framework/actor.h"

bool vl::SquareComponent::Write(const rapidjson::Value& value) const
{
    return false;
}

bool vl::SquareComponent::Read(const rapidjson::Value& value)
{
    READ_DATA(value, color);
    READ_DATA(value, size);

    return true;
}

void vl::SquareComponent::Update()
{
    //
}

void vl::SquareComponent::Draw(Renderer& renderer)
{
    g_renderer.DrawRect(m_owner->GetTransform().position, size, color);
}

void vl::SquareComponent::ChangeColor(Color& newColor)
{
    color = newColor;
}
