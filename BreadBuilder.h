#pragma once

class BreadBuilder : public Builder				//����
{
public:
	SortOfFlour* getSortOfFlour();
	OilOrButter* getOilOrButter();
	Water* getWater();
	Salt* getSalt();
	OtherIngredients* getOtherAdditives();
};

#include "BreadBuilder.cpp"