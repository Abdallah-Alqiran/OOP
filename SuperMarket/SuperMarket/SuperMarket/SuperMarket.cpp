#include <iostream>
#include "SuperMarket.h"

using namespace std;

void setColor(int clolorCode) {
	cout << "\033[" << clolorCode << "m";
}

int main()
{
	SuperMarket supermarket;

	setColor(33);
	cout << "Welcome to SuperMarket app\n";
	setColor(0);

	while ("Abdallah Alqiran")
	{
		cout << "====================\n\n";
		
		cout << "Enter your order...\n"
			<< "1 for buy goods, 2 for sell goods, 3 for know exist items and 4 for exit\n";
		int num;		cin >> num;
		
		if (num == 1)
		{
			supermarket.Buy();
		}

		else if (num == 2)
		{
			supermarket.Sell();
		}

		else if (num == 3)
		{
			supermarket.knowExist();
		}

		else if (num == 4)
		{
			exit(0);
		}

		else
		{
			cout << "wrong number...\n"
				"Please enter 1 for buy goods or 2 for sell goods\n";
		}

	}
}