#include "KnightColorConverter.h"
#pragma once
class KnightColorConverterCYMK : public KnightColorConverter
{
public:
	KnightColorConverterCYMK();
	KnightColorRGB TransformTo(KnightColor currentKnightColor) override;
	KnightColor TransformFrom(KnightColorRGB currentKnightColor) override;
};