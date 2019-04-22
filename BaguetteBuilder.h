#pragma once

class BaguetteBuilder : public Builder					//багет
{
public:
	SortOfFlour* getSortOfFlour();
	OilOrButter* getOilOrButter();
	Water* getWater();
	Salt* getSalt();
	OtherIngredients* getOtherAdditives();
};

#include "BaguetteBuilder.cpp"