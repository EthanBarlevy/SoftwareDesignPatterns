#pragma once
#include "renderComponent.h"
#include "Math/rect.h"

namespace vl
{

	class LineComponent : public RenderComponent
	{
	public:

		CLASS_CLONE(LineComponent);

		virtual bool Write(const rapidjson::Value& value) const override;
		virtual bool Read(const rapidjson::Value& value) override;

		virtual void Update() override;
		virtual void Draw(Renderer& renderer) override;

	public:
		Vector2 endPosition;
		Color color;
	};
}