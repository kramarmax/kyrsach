SortOfFlour* CiabattaBuilder::getSortOfFlour()
{
	SortOfFlour* sort_of_flour = new SortOfFlour;
	strcpy_s(sort_of_flour->sort, 10, "пшеничная");
	sort_of_flour->amount = 400;
	return sort_of_flour;
}
OilOrButter* CiabattaBuilder::getOilOrButter()
{
	OilOrButter* oil_or_butter = new OilOrButter;
	strcpy_s(oil_or_butter->maslo, 10, "оливковое");
	oil_or_butter->amount = 15;
	return oil_or_butter;
}
Water* CiabattaBuilder::getWater()
{
	Water* water = new Water;
	water->amount = 240;
	return water;
}
Salt* CiabattaBuilder::getSalt()
{
	Salt* salt = new Salt;
	salt->amount = 8;
	return salt;
}
OtherIngredients* CiabattaBuilder::getOtherAdditives()
{
	OtherIngredients* other_ingredients = new OtherIngredients[2];
	strcpy_s(other_ingredients[0].ingredient, 7, "дрожжи");
	other_ingredients[0].amount = 4;
	strcpy_s(other_ingredients[0].measure, 2, "г");

	strcpy_s(other_ingredients[1].ingredient, 7, "молоко");
	other_ingredients[1].amount = 50;
	strcpy_s(other_ingredients[1].measure, 3, "мл");

	return other_ingredients;
}
