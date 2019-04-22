#pragma once

class LoafBuilder : public Builder			//�������
{
public:
	SortOfFlour * getSortOfFlour();
	OilOrButter* getOilOrButter();
	Water* getWater();
	Salt* getSalt();
	OtherIngredients* getOtherAdditives();
};

#include "LoafBuilder.cpp"