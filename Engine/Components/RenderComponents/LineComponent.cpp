#include "LineComponent.h"
#include "Framework/actor.h"

bool vl::LineComponent::Write(const rapidjson::Value& value) const
{
    return false;
}

bool vl::LineComponent::Read(const rapidjson::Value& value)
{
    READ_DATA(value, endPosition);
    READ_DATA(value, color);

    return true;
}

void vl::LineComponent::Update()
{
    //
}

void vl::LineComponent::Draw(Renderer& renderer)
{
    g_renderer.DrawLine(m_owner->GetTransform().position, endPosition, color);
}
