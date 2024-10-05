#pragma once
#include <iostream>
#include <map>
#include "Buy.h"
#include "Sell.h"
#include "KnowExist.h"

using namespace std;

class Clothes : public Buy, public Sell, public KnowExist
{
private:
	map<string, int> clothes;
	map<string, float> clothesPrice;

public:
	void Buy()
	{
		buy("clothes");

		if (item == "-1")
			return;

		clothes[item] += number;
		clothesPrice[item] += price;

		printItemNumber(clothes[item], clothesPrice[item], item);
	}

	void Sell()
	{
		sell("clothes", clothes, clothesPrice);
		clothes[sItem] -= sNumber;
	}
	
	void Storage()
	{
		KnowStorage(clothes);
	}
};

