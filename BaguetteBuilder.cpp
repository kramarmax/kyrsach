SortOfFlour* BaguetteBuilder::getSortOfFlour()
{
	SortOfFlour* sort_of_flour = new SortOfFlour;
	strcpy_s(sort_of_flour->sort, 10, "пшеничная");
	sort_of_flour->amount = 450;
	return sort_of_flour;
}
OilOrButter* BaguetteBuilder::getOilOrButter()
{
	OilOrButter* oil_or_butter = new OilOrButter;
	strcpy_s(oil_or_butter->maslo, 13, "растительное");
	oil_or_butter->amount = 15;
	return oil_or_butter;
}
Water* BaguetteBuilder::getWater()
{
	Water* water = new Water;
	water->amount = 250;
	return water;
}
Salt* BaguetteBuilder::getSalt()
{
	Salt* salt = new Salt;
	salt->amount = 5;
	return salt;
}
OtherIngredients* BaguetteBuilder::getOtherAdditives()
{
	OtherIngredients* other_ingredients = new OtherIngredients[2];
	strcpy_s(other_ingredients[0].ingredient, 6, "сахар");
	other_ingredients[0].amount = 8;
	strcpy_s(other_ingredients[0].measure, 2, "г");

	strcpy_s(other_ingredients[1].ingredient, 7, "дрожжи");
	other_ingredients[1].amount = 8;
	strcpy_s(other_ingredients[1].measure, 2, "г");

	return other_ingredients;
}	