#pragma once
#include <iostream>
#include <map>
#include "Buy.h"
#include "Sell.h"
#include "KnowExist.h"

using namespace std;

class Food : public Buy, public Sell, public KnowExist
{
private:
	map<string, int> foods;
	map<string, float> foodPrice;

public:
	void Buy()
	{
		buy("foods");

		if (item == "-1")
			return;

		foods[item] += number;
		foodPrice[item] += price;

		printItemNumber(foods[item], foodPrice[item], item);
	}

	void Sell()
	{
		sell("foods", foods, foodPrice);
		foods[sItem] -= sNumber;
	}

	void Storage()
	{
		KnowStorage(foods);
	}

};

