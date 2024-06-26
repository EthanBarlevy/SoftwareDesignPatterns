#include "renderer.h"
#include "texture.h"
#include "Math/transform.h"
#include "Math/rect.h"
#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_image.h>
#include <iostream>

namespace vl
{
	void Renderer::Initialize()
	{
		SDL_Init(SDL_INIT_VIDEO);
		TTF_Init();
		IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG);
		m_view = Matrix3x3::identity;
		m_viewport = Matrix3x3::identity;
	}

	void Renderer::Shutodwn()
	{
		SDL_DestroyRenderer(m_renderer);
		SDL_DestroyWindow(m_window);
		TTF_Quit();
		IMG_Quit();
	}

	void Renderer::CreateWindow(const char* name, int width, int height)
	{
		m_width = width;
		m_height = height;

		m_window = SDL_CreateWindow(name, 100, 100, width, height, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
		m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_ACCELERATED);
	}

	void Renderer::BeginFrame()
	{
		SDL_SetRenderDrawColor(m_renderer, m_clearColor.r, m_clearColor.g, m_clearColor.b, m_clearColor.a);
		SDL_RenderClear(m_renderer);
	}

	void Renderer::EndFrame()
	{
		SDL_RenderPresent(m_renderer);
	}

	void Renderer::DrawLine(float x1, float y1, float x2, float y2)
	{
		SDL_SetRenderDrawColor(m_renderer, 255, 255, 255, 255);
		SDL_RenderDrawLineF(m_renderer, x1, y1, x2, y2);
	}
	void Renderer::DrawPoint(float x, float y)
	{
		SDL_SetRenderDrawColor(m_renderer, 255, 255, 255, 255);
		SDL_RenderDrawPointF(m_renderer, x, y);
	}

	void Renderer::DrawLine(const Vector2& v1, const Vector2& v2, const Color& color)
	{
		SDL_SetRenderDrawColor(m_renderer, color.r, color.g, color.b, color.a);
		SDL_RenderDrawLineF(m_renderer, v1.x, v1.y, v2.x, v2.y);
	}

	void Renderer::DrawPoint(const Vector2& v, const Color& color)
	{
		SDL_SetRenderDrawColor(m_renderer, color.r, color.g, color.b, color.a);
		SDL_RenderDrawPointF(m_renderer, v.x, v.y);
	}

	void Renderer::DrawRect(const Vector2& v1, const Vector2& v2, const Color& color)
	{
		SDL_SetRenderDrawColor(m_renderer, color.r, color.g, color.b, color.a);
		auto rect = new SDL_Rect();
		rect->x = v1.x; rect->y = v1.y; rect->w = v2.x; rect->h = v2.y;
		SDL_RenderFillRect(m_renderer, rect);
	}

	void Renderer::DrawCircle(const Vector2& v1, const float rad, const Color& color)
	{
		SDL_SetRenderDrawColor(m_renderer, color.r, color.g, color.b, color.a);
		int centerX = static_cast<int>(v1.x);
		int centerY = static_cast<int>(v1.y);
		int radius = static_cast<int>(rad);

		for (int w = 0; w < radius * 2; w++) {
			for (int h = 0; h < radius * 2; h++) {
				int dx = radius - w; // horizontal offset
				int dy = radius - h; // vertical offset
				if ((dx * dx + dy * dy) <= (radius * radius)) {
					SDL_RenderDrawPoint(m_renderer, centerX + dx, centerY + dy);
				}
			}
		}
	}

	void Renderer::Draw(std::shared_ptr<Texture> texture, const Vector2& position, float angle, const Vector2& scale, const Vector2& registration)
	{
		Vector2 size = texture->GetSize();
		size *= scale;

		// setting the registration point (middle is default)
		Vector2 origin = (size * registration);
		Vector2 tposition = position - origin;

		SDL_Rect dest;
		dest.x = (int)tposition.x;
		dest.y = (int)tposition.y;
		dest.w = (int)size.x;
		dest.h = (int)size.y;

		SDL_Point center{ (int)origin.x, (int)origin.y };

		SDL_RenderCopyEx(m_renderer, texture->m_texture, nullptr, &dest, angle, &center, SDL_FLIP_NONE);
	}

	void Renderer::Draw(std::shared_ptr<Texture> texture, const Transform& transform, const Vector2& registration)
	{
		Vector2 size = texture->GetSize();
		size *= transform.scale;

		// setting the registration point (middle is default)
		Vector2 origin = (size * registration);
		Vector2 tposition = transform.position - origin;

		SDL_Rect dest;
		dest.x = (int)tposition.x;
		dest.y = (int)tposition.y;
		dest.w = (int)size.x;
		dest.h = (int)size.y;

		SDL_Point center{ (int)origin.x, (int)origin.y };

		SDL_RenderCopyEx(m_renderer, texture->m_texture, nullptr, &dest, transform.rotation, &center, SDL_FLIP_NONE);
	}

	void Renderer::Draw(std::shared_ptr<Texture> texture, const Rect& source, const Transform& transform, const Vector2& registration, bool fliph, const Vector2& paralax)
	{
		if (paralax == Vector2::ONE)
		{
			Matrix3x3 mx = m_viewport * m_view * transform.matrix;

			Vector2 size = Vector2{ source.w, source.h };
			size *= mx.GetScale();

			// setting the registration point (middle is default)
			Vector2 origin = (size * registration);
			Vector2 tposition = mx.GetTranslation() - origin;

			SDL_Rect dest;
			dest.x = (int)tposition.x;
			dest.y = (int)tposition.y;
			dest.w = (int)size.x;
			dest.h = (int)size.y;

			SDL_Rect src;
			src.x = source.x;
			src.y = source.y;
			src.w = source.w;
			src.h = source.h;

			SDL_Point center{ (int)origin.x, (int)origin.y };

			SDL_RendererFlip flip = (fliph) ? SDL_FLIP_HORIZONTAL : SDL_FLIP_NONE;

			SDL_RenderCopyEx(m_renderer, texture->m_texture, &src, &dest, math::RadToDeg(mx.GetRotation()), &center, flip);
		}
		else 
		{
			Vector2 size = Vector2{ source.w, source.h };
			size *= transform.scale;

			Vector2 origin = (size * registration);
			Vector2 tposition = transform.position - origin;

			SDL_Rect dest;
			dest.x = (int)tposition.x;
			dest.y = (int)tposition.y;
			dest.w = (int)size.x;
			dest.h = (int)size.y;

			SDL_Rect src;
			src.x = source.x;
			src.y = source.y;
			src.w = source.w;
			src.h = source.h;

			SDL_Point center{ (int)origin.x, (int)origin.y };

			SDL_RendererFlip flip = (fliph) ? SDL_FLIP_HORIZONTAL : SDL_FLIP_NONE;
			SDL_RenderCopyEx(m_renderer, texture->m_texture, &src, &dest, transform.rotation, &center, flip);
		}
	}
}
