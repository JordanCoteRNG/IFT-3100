/*****************************************************
 * TP IFT3100H24 - Knight Maker
 * by Team 12
 *****************************************************
 *
 * KnightColorConverter class implementation
 *
 *****************************************************/
#include "KnightColor.h"
#include "KnightColorRGB.h"
#pragma once
class KnightColorConverter
{
protected:
	std::string name;
public:
	KnightColorConverter();
	KnightColorRGB TransformTo(KnightColor currentArmorColor);
	KnightColor TransformFrom(KnightColorRGB currentArmorColor);

	std::string get_name();
};

