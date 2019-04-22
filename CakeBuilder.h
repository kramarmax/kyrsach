#pragma once

class CakeBuilder : public Builder				//����
{
public:
	SortOfFlour* getSortOfFlour();
	OilOrButter* getOilOrButter();
	Water* getWater();
	Salt* getSalt();
	OtherIngredients* getOtherAdditives();
};

#include "CakeBuilder.cpp"