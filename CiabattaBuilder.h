#pragma once

class CiabattaBuilder : public Builder			//чиабатта
{
public:
	SortOfFlour * getSortOfFlour();
	OilOrButter* getOilOrButter();
	Water* getWater();
	Salt* getSalt();
	OtherIngredients* getOtherAdditives();
};

#include "CiabattaBuilder.cpp"