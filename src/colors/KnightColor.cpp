/*****************************************************
 * TP IFT3100H24 - Knight Maker
 * by Team 12
 *****************************************************
 *
 * KnightColor class implementation
 *
 *****************************************************/
#include "KnightColor.h"
KnightColor::KnightColor(float v1, float v2, float v3, float v4, int a)
	: value1(v1), value2(v2), value3(v3), value4(v4), alpha(a) {
}

float KnightColor::get_value1() {
	return value1;
}

float KnightColor::get_value2() {
	return value2;
}

float KnightColor::get_value3() {
	return value3;
}

float KnightColor::get_value4() {
	return value4;
}

int KnightColor::get_alpha() {
	return alpha;
}

std::string KnightColor::get_type() {
	return type;
}
