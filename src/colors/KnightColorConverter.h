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
	virtual KnightColorRGB TransformTo(KnightColor currentKnightColor) = 0;
	virtual KnightColor TransformFrom(KnightColorRGB currentKnightColor) = 0;

	std::string get_name();
};

