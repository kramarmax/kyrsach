#pragma once

class BrownieBuilder : public Builder			//��������
{
public:
	SortOfFlour * getSortOfFlour();
	OilOrButter* getOilOrButter();
	Water* getWater();
	Salt* getSalt();
	OtherIngredients* getOtherAdditives();
};

#include "BrownieBuilder.cpp"