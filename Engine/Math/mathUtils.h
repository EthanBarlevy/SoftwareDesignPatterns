#pragma once
#include <cmath> 
//#ifndef __MATH_UTILS_H__
//#define __MATH_UTILS_H__

namespace math 
{
	constexpr float PI = 3.14159265359f; // 180
	constexpr float TWOPI = 6.28318530718f; // 360
	constexpr float HALFPI = 1.57079632679f; // 90

	constexpr float DegToRad(float degrees) { return degrees * (PI / 180); }
	constexpr float RadToDeg(float radians) { return radians * (180 / PI); }

	template<typename T>
	T Clamp(T value, T min, T max)
	{
		if (value < min) { return min; }
		if (value > max) { return max; }

		return value;
	}

	template<typename T>
	T Lerp(T min, T max, float t)
	{
		t = Clamp(t, 0.0f, 1.0f);

		return min + ((max - min) * t);
	}

	template<typename T>
	T Remap(T value, T oldMin, T oldMax, T newMin, T newMax)
	{
		return Lerp(newMin, newMax, Normalize(value, oldMin, oldMax));
	}

	template<typename T>
	T Mod(T num, T den)
	{
		return std::fmod(num, den);
	}

	template<>
	inline int Mod(int num, int den)
	{
		return num % den;
	}

	template<typename T>
	T Wrap(T value, T min, T max)
	{
		if (value < min) return max - mod((min - value), (max - min));
		if (value > max) return min + mod((value - min), (max - min));

		return value;
	}
}
//#endif // __MATH_UTILS_H__