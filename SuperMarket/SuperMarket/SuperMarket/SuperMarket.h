#pragma once
#include <vector>
#include "Food.h"
#include "Drinks.h"
#include "FruitsAndVegetables.h"
#include "Clothes.h"
#include "Buy.h"
#include "Color.h"


using namespace std;

class SuperMarket : public Color
{
private:
	Food food; Drinks drinks;
	FruitsAndVegetables fruitsAndVegetables; Clothes clothes;
	
	vector<string> types = {"Food", "Drinks", "Fruits and Vigitables", "Clothes"};

	void printTypes()
	{
		for (int i = 0; i < types.size(); ++i)
			cout << i + 1 << ") for " << types[i] << endl;
	}

public:
	void Buy()
	{
		cout << "Select the type number of what you want to buy\n";
		printTypes();

		int num;		cin >> num;
		
		switch(num)
		{
		case 1:
			food.Buy();
			break;
		case 2:
			drinks.Buy();
			break;
		case 3:
			fruitsAndVegetables.Buy();
			break;
		case 4:
			clothes.Buy();
			break;
		default:
			cout << "Invalid number\n";
		}
		
	}

	void Sell()
	{
		cout << "Select the type number of what you want to sell\n";
		printTypes();

		int num;		cin >> num;

		switch (num)
		{
		case 1:
			food.Sell();
			break;
		case 2:
			drinks.Sell();
			break;
		case 3:
			fruitsAndVegetables.Sell();
			break;
		case 4:
			clothes.Sell();
			break;
		default:
			cout << "Invalid number\n";
		}

	}

	void knowExist()
	{
		cout << "Select the type number of what you want to know the amount\n";
		printTypes();

		int num;		cin >> num;

		switch (num)
		{
		case 1:
			food.Storage();
			break;
		case 2:
			drinks.Storage();
			break;
		case 3:
			fruitsAndVegetables.Storage();
			break;
		case 4:
			clothes.Storage();
			break;
		default:
			cout << "Invalid number\n";
		}


	}

};

