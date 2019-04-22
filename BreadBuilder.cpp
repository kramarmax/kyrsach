SortOfFlour* BreadBuilder::getSortOfFlour()
{
	SortOfFlour* sort_of_flour = new SortOfFlour;
	strcpy_s(sort_of_flour->sort, 7, "ржаная");
	sort_of_flour->amount = 500;
	return sort_of_flour;
}
OilOrButter* BreadBuilder::getOilOrButter()
{
	OilOrButter* oil_or_butter = new OilOrButter;
	strcpy_s(oil_or_butter->maslo, 10, "сливочное");
	oil_or_butter->amount = 30;
	return oil_or_butter;
}
Water* BreadBuilder::getWater()
{
	Water* water = new Water;
	water->amount = 250;
	return water;
}
Salt* BreadBuilder::getSalt()
{
	Salt* salt = new Salt;
	salt->amount = 8;
	return salt;
}
OtherIngredients* BreadBuilder::getOtherAdditives()
{
	OtherIngredients* other_ingredients = new OtherIngredients;
	strcpy_s(other_ingredients->ingredient, 7, "дрожжи");
	other_ingredients->amount = 11;
	strcpy_s(other_ingredients->measure, 2, "г");

	return other_ingredients;
}
