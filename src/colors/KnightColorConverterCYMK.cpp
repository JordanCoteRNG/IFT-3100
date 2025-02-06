#include "KnightColorConverterCYMK.h"

KnightColorConverterCYMK::KnightColorConverterCYMK() {
	name = "CYMK";
}

KnightColorRGB KnightColorConverter::TransformTo(KnightColor currentKnightColor) {
	int r = (int)(255 * (1 - currentKnightColor.get_value1()) * (1 - currentKnightColor.get_value4()));
	int g = (int)(255 * (1 - currentKnightColor.get_value2()) * (1 - currentKnightColor.get_value4()));
	int b = (int)(255 * (1 - currentKnightColor.get_value3()) * (1 - currentKnightColor.get_value4()));
	KnightColorRGB arc(r, g, b, currentKnightColor.get_alpha());
	return arc;
}

KnightColor KnightColorConverter::TransformFrom(KnightColorRGB currentKnightColor) {
	float black = 1 - (std::max(std::max(currentKnightColor.get_red(), currentKnightColor.get_green()), currentKnightColor.get_blue()) / static_cast<float>(255));
	float cyan = (1 - currentKnightColor.get_red() / static_cast<float>(255) - black) / (1 - black);
	float magenta = (1 - currentKnightColor.get_green() / static_cast<float>(255) - black) / (1 - black);
	float yellow = (1 - currentKnightColor.get_blue() / static_cast<float>(255) - black) / (1 - black);
	KnightColor ac(cyan, magenta, yellow, black, currentKnightColor.get_alpha());
	return ac;
}
