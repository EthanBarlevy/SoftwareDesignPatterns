#pragma once
#include "renderComponent.h"
#include "Math/rect.h"

namespace vl
{

	class SquareComponent : public RenderComponent
	{
	public:

		CLASS_CLONE(SquareComponent);

		virtual bool Write(const rapidjson::Value& value) const override;
		virtual bool Read(const rapidjson::Value& value) override;

		virtual void Update() override;
		virtual void Draw(Renderer& renderer) override;

	public:
		Color color;
	};
}