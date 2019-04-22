SortOfFlour * BrownieBuilder::getSortOfFlour()
{
	SortOfFlour* sort_of_flour = new SortOfFlour;
	strcpy_s(sort_of_flour->sort, 14, "высшего сорта");
	sort_of_flour->amount = 250;
	return sort_of_flour;
}
OilOrButter* BrownieBuilder::getOilOrButter()
{
	OilOrButter* oil_or_butter = new OilOrButter;
	strcpy_s(oil_or_butter->maslo, 10, "сливочное");
	oil_or_butter->amount = 180;
	return oil_or_butter;
}
Water* BrownieBuilder::getWater()
{
	Water* water = new Water;
	water->amount = 70;
	return water;
}
Salt* BrownieBuilder::getSalt()
{
	Salt* salt = new Salt;
	salt->amount = 3;
	return salt;
}
OtherIngredients* BrownieBuilder::getOtherAdditives()
{
	OtherIngredients* other_ingredients = new OtherIngredients[3];
	strcpy_s(other_ingredients[0].ingredient, 6, "сахар");
	other_ingredients[0].amount = 280;
	strcpy_s(other_ingredients[0].measure, 2, "г");

	strcpy_s(other_ingredients[1].ingredient, 14, "какао-порошок");
	other_ingredients[1].amount = 100;
	strcpy_s(other_ingredients[1].measure, 2, "г");

	strcpy_s(other_ingredients[2].ingredient, 5, "€ица");
	other_ingredients[2].amount = 3;
	strcpy_s(other_ingredients[2].measure, 6, "штуки");

	return other_ingredients;
}