void Director::setBuilder(Builder* newBuilder)
{
	builder = newBuilder;
}
BakeryProduct* Director::getBakeryProduct()
{
	BakeryProduct* bakery_poduct = new BakeryProduct;

	bakery_poduct->sort_of_flour = builder->getSortOfFlour();
	bakery_poduct->oil_or_butter = builder->getOilOrButter();
	bakery_poduct->water = builder->getWater();
	bakery_poduct->salt = builder->getSalt();		
	bakery_poduct->other_ingredients = builder->getOtherAdditives();
	return bakery_poduct;
}
