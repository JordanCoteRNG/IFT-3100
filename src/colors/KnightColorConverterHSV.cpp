/*****************************************************
 * TP IFT3100H24 - Knight Maker
 * by Team 12
 *****************************************************
 *
 * KnightColorConverterHSV class implementation
 *
 *****************************************************/
#include "KnightColorConverterHSV.h"

KnightColorConverterHSV::KnightColorConverterHSV() {
	name = "HSV";
}

KnightColorRGB KnightColorConverter::TransformTo(KnightColor currentKnightColor) {
	float hue = currentKnightColor.get_value1();
	float saturation = currentKnightColor.get_value2() / 100.00f;
	float value = currentKnightColor.get_value3() / 100.00f;
	float ligthness = abs(2 * value - 1);
	float chroma = (1 - ligthness) * saturation;
	float x = chroma * (1 - abs(fmod(hue / 60, 2) - 1));
	float m = value - (chroma / 2);
	float r = 0.0f;
	float g = 0.0f;
	float b = 0.0f;
	if (hue < 60.0f)
	{
		r = chroma + m;
		g = x + m;
		b = m;
	}
	else if (hue < 120.0f)
	{
		r = x + m;
		g = chroma + m;
		b = m;
	}
	else if (hue < 180.0f)
	{
		r = m;
		g = chroma + m;
		b = x + m;
	}
	else if (hue < 240.0f)
	{
		r = m;
		g = x + m;
		b = chroma + m;
	}
	else if (hue < 300.0f)
	{
		r = x + m;
		g = m;
		b = chroma + m;
	}
	else if (hue < 360.0f)
	{
		r = chroma + m;
		g = m;
		b = x + m;
	}

	KnightColorRGB arc(r * 255.0f, g * 255.0f, b * 255.0f, currentKnightColor.get_alpha());
	return arc;
}

KnightColor KnightColorConverter::TransformFrom(KnightColorRGB currentKnightColor) {
	int red = currentKnightColor.get_red();
	int green = currentKnightColor.get_green();
	int blue = currentKnightColor.get_blue();
	int alpha = currentKnightColor.get_alpha();

	float maxValue = std::max({ red, green, blue });
	float minValue = std::min({ red, green, blue });
	float maxMin = maxValue - minValue;
	minValue = maxMin / maxValue;
	float value = maxValue / static_cast<float>(255) * 100;
	minValue = minValue * 100;
	float hueValue = 0;
	if (maxValue == currentKnightColor.get_red()) {
		hueValue - (green - blue) / maxMin;
	}
	else if (maxValue == currentKnightColor.get_green()) {
		hueValue = (blue - red) / maxMin + 2;
	}
	else if (maxValue == currentKnightColor.get_blue()) {
		hueValue = (red - green) / maxMin + 4;
	}
	hueValue = 60 * hueValue;
	KnightColor ac(hueValue, minValue, value,0.0f, alpha);

	return ac;
}
