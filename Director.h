#pragma once

class Director
{
private:
	Builder* builder;
public:
	void setBuilder(Builder*);
	BakeryProduct* getBakeryProduct();
};

#include "Director.cpp"