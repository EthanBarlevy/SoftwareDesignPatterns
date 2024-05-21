#pragma once
#include "renderComponent.h"
#include "Math/rect.h"

namespace vl
{

	class CircleComponent : public RenderComponent
	{
	public:

		CLASS_CLONE(CircleComponent);

		virtual bool Write(const rapidjson::Value& value) const override;
		virtual bool Read(const rapidjson::Value& value) override;

		virtual void Update() override;
		virtual void Draw(Renderer& renderer) override;

		void ChangeColor(Color& newColor);

	public:
		float radius;
		Color color;
	};
}