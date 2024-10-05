#pragma once
#include <iostream>
#include <map>
#include "Buy.h"
#include "Sell.h"
#include "KnowExist.h"

using namespace std;

class FruitsAndVegetables : public Buy, public Sell, public KnowExist
{
private:
	map<string, int> fruitsAndVegetables;
	map<string, float> fruitsAndVegetablesPrice;

public:
	void Buy()
	{
		buy("fruits and vegetables");

		if (item == "-1")
			return;

		fruitsAndVegetables[item] += number;
		fruitsAndVegetablesPrice[item] += price;
		
		printItemNumber(fruitsAndVegetables[item], fruitsAndVegetablesPrice[item], item);
	}

	void Sell()
	{
		sell("fruits and vegetables", fruitsAndVegetables, fruitsAndVegetablesPrice);
		fruitsAndVegetables[sItem] -= sNumber;
	}

	void Storage()
	{
		KnowStorage(fruitsAndVegetables);
	}

};

