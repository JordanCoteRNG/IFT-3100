/*****************************************************
 * TP IFT3100H24 - Knight Maker
 * by Team 12
 *****************************************************
 *
 * KnightColorConverterRGB class implementation
 *
 *****************************************************/

#include "KnightColorConverterRGB.h"
KnightColorConverterRGB::KnightColorConverterRGB() {
}

KnightColorRGB KnightColorConverter::TransformTo(KnightColor currentKnightColor) {
	KnightColorRGB arc(currentKnightColor.get_value1(), currentKnightColor.get_value2(), currentKnightColor.get_value3(), currentKnightColor.get_alpha());
	return arc;
}

KnightColor KnightColorConverter::TransformFrom(KnightColorRGB currentKnightColor) {
	float red = currentKnightColor.get_red();
	float green = currentKnightColor.get_green();
	float blue = currentKnightColor.get_blue();
	int alpha = currentKnightColor.get_alpha();
	KnightColor ac(red, green, blue,0.0f, currentKnightColor.get_alpha());
	return ac;
}

std::string KnightColorConverter::get_name() {
	return "RGB";
}