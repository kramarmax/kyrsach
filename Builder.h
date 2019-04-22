#pragma once

class Builder					// ����������� ����� - ��������� ��� �������� ��������� 
{
public:
	virtual SortOfFlour* getSortOfFlour() = 0;
	virtual OilOrButter* getOilOrButter() = 0;
	virtual Water* getWater() = 0;
	virtual Salt* getSalt() = 0;
	virtual OtherIngredients* getOtherAdditives() = 0;
};