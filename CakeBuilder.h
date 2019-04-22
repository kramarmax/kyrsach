#pragma once

class CakeBuilder : public Builder				//торт
{
public:
	SortOfFlour* getSortOfFlour();
	OilOrButter* getOilOrButter();
	Water* getWater();
	Salt* getSalt();
	OtherIngredients* getOtherAdditives();
};

#include "CakeBuilder.cpp"