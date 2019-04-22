#pragma once

class BrownieBuilder : public Builder			//пирожное
{
public:
	SortOfFlour * getSortOfFlour();
	OilOrButter* getOilOrButter();
	Water* getWater();
	Salt* getSalt();
	OtherIngredients* getOtherAdditives();
};

#include "BrownieBuilder.cpp"