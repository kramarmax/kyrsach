#pragma once
class BakeryProduct
{
public:
	SortOfFlour* sort_of_flour;
	OilOrButter* oil_or_butter;
	Water* water;
	Salt* salt;
	OtherIngredients* other_ingredients;
	void recipe(const char*, int);
};

#include "BakeryProduct.cpp"