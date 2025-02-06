/*****************************************************
 * TP IFT3100H24 - Knight Maker
 * by Team 12
 *****************************************************
 *
 * KnightColorRGB class implementation
 *
 *****************************************************/

#include "KnightColorRGB.h"

KnightColorRGB::KnightColorRGB(int red, int green, int blue, int a)
	: red(red), green(green), blue(blue), alpha(a) {
}

KnightColorRGB::KnightColorRGB() {}

int KnightColorRGB::get_red() {
	return red;
}

int KnightColorRGB::get_green() {
	return green;
}

int KnightColorRGB::get_blue() {
	return blue;
}

int KnightColorRGB::get_alpha() {
	return alpha;
}