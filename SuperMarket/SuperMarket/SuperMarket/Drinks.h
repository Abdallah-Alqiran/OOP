#pragma once
#include <iostream>
#include <map>
#include "Buy.h"
#include "Sell.h"
#include "KnowExist.h"

using namespace std;

class Drinks : public Buy, public Sell, public KnowExist
{
private:
	map<string, int> drinks;
	map<string, float> drinkPrice;

public:
	void Buy()
	{
		buy("drinks");

		if (item == "-1")
			return;

		drinks[item] += number;
		drinkPrice[item] += price;

		printItemNumber(drinks[item], drinkPrice[item], item);
	}
	
	void Sell()
	{
		sell("drinks", drinks, drinkPrice);
		drinks[sItem] -= sNumber;
	}

	void Storage()
	{
		KnowStorage(drinks);
	}

};

