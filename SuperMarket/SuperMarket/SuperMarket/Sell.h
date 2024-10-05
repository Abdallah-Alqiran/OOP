#pragma once
#include <iostream>
#include <map>
#include "Color.h"

using namespace std;

class Sell : public Color
{
public:
	string sItem;
	int sNumber = 0;
	
	void sell(string type, map<string,int> M, map<string, float> p)
	{
		setColor(33);
		cout << "Enter " << type << " name or -1 to go back: ";
		cin >> sItem;
		resetColor();

		if (sItem == "-1")
		{
			resetColor();
			sNumber = 0;
			return;
		}

		if (M[sItem] == 0) {
			setColor(31);
			cout << "Sorry there is no " << sItem << endl;
			resetColor();
			sNumber = 0;
			return;
		}


		setColor(33);
		cout << "Enter the number of " << sItem << " you want to sell: ";
		cin >> sNumber;
		resetColor();

		if (M[sItem] < sNumber) {
			setColor(31);
			cout << "Sorry, the " << sItem << 
				" amount we have not enough, there are just " << M[sItem] << endl;

			resetColor();
			sNumber = 0;
			return;
		}

		cout << "Do you want to sell " << sNumber << 
			" of " << sItem << " for " << p[sItem] * sNumber
			<< "$? [Y/N] : ";

		char c;		cin >> c;
		if (c != 'Y') {
			setColor(31);
			cout << "Failed to sell...\n";
			resetColor();
			sNumber = 0;
			return;
		}

		M[sItem] -= sNumber;

		setColor(36);
		cout << sItem << " was successfully bought\t"
			"you have " << sNumber << " of this item\n";

		if (M[sItem] == 0)
			cout << "there is no " << sItem << " in the storage\n";
		else if (M[sItem] == 1)
			cout << "there is just one of " << sItem << endl;
		else 
			cout << "there are " << M[sItem] << " in the storage of " << sItem << endl;
		resetColor();
	}



};

