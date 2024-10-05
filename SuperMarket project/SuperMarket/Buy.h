#pragma once
#include <iostream>
#include "Color.h"

using namespace std;

class Buy : public Color
{
public:
	string item;
	int number;
	float price = 0;
	map<string, int> elements;

	void buy(string type)
	{
		
		setColor(33);
		cout << "Enter " << type << " name or -1 to go back: ";
		cin >> item;

		if (item == "-1")
		{
			cout << "Going to main menu...\n";
			resetColor();
			return;
		}

		elements[item]++;

		if (elements[item] == 1) {
			cout << "Enter the price of " << item << ": ";
			cin >> price;

			if (price < 0) {
				setColor(31);
				cout << "Invalid Number...\n";
				item = "-1";
				resetColor();
				return;
			}

		}
		else price = 0;

		cout << "Enter the number of " << item << " you want to add: ";
		cin >> number;

		if (number < 0) {
			setColor(31);
			cout << "Invalid Number...\n";
			item = "-1";
		}

		resetColor();
	}

	void printItemNumber(int i, double p, string sItem)
	{
		setColor(36);
		cout << item << " was added successfully\t"
			"you have " << i << " of " << sItem << endl;
		cout << "The price of " << sItem << " = " << p << endl;

		resetColor();
	}

};

