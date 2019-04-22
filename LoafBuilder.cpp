SortOfFlour* LoafBuilder::getSortOfFlour()
{
	SortOfFlour* sort_of_flour = new SortOfFlour;
	strcpy_s(sort_of_flour->sort, 14, "высшего сорта");
	sort_of_flour->amount = 800;
	return sort_of_flour;
}
OilOrButter* LoafBuilder::getOilOrButter()
{
	OilOrButter* oil_or_butter = new OilOrButter;
	strcpy_s(oil_or_butter->maslo, 10, "сливочное");
	oil_or_butter->amount = 200;
	return oil_or_butter;
}
Water* LoafBuilder::getWater()
{
	Water* water = new Water;
	water->amount = 200;
	return water;
}
Salt* LoafBuilder::getSalt()
{
	Salt* salt = new Salt;
	salt->amount = 5;
	return salt;
}
OtherIngredients* LoafBuilder::getOtherAdditives()
{
	OtherIngredients* other_ingredients = new OtherIngredients[4];
	strcpy_s(other_ingredients[0].ingredient, 7, "дрожжи");
	other_ingredients[0].amount = 10;
	strcpy_s(other_ingredients[0].measure, 2, "г");

	strcpy_s(other_ingredients[1].ingredient, 7, "молоко");
	other_ingredients[1].amount = 300;
	strcpy_s(other_ingredients[1].measure, 3, "мл");

	strcpy_s(other_ingredients[2].ingredient, 5, "€ица");
	other_ingredients[2].amount = 4;
	strcpy_s(other_ingredients[2].measure, 6, "штуки");

	strcpy_s(other_ingredients[3].ingredient, 6, "сахар");
	other_ingredients[3].amount = 75;
	strcpy_s(other_ingredients[3].measure, 2, "г");

	return other_ingredients;
}
