/*****************************************************
 * TP IFT3100H24 - Knight Maker
 * by Team 12
 *****************************************************
 *
 * KnightColor class implementation
 *
 *****************************************************/

#include <string>
#include <iostream>
#pragma once

class KnightColor
{
public:
	KnightColor(float v1, float v2, float v3, float v4, int a);

private:
	float value1;
	float value2;
	float value3;
	float value4;
	int alpha;
	std::string type;

public:

	float get_value1();
	float get_value2();
	float get_value3();
	float get_value4();
	int get_alpha();
	std::string get_type();

};

