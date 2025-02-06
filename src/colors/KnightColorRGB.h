/*****************************************************
 * TP IFT3100H24 - Knight Maker
 * by Team 12
 *****************************************************
 *
 * KnightColorRGB class implementation
 *
 *****************************************************/

#pragma once
class KnightColorRGB
{
public:
	KnightColorRGB(int red, int green, int blue, int a);
	KnightColorRGB();

private:
	int red;
	int green;
	int blue;
	int alpha;

public:
	int get_red();
	int get_green();
	int get_blue();
	int get_alpha();

};


