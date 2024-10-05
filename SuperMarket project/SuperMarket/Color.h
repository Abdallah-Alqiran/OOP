#pragma once
#include <iostream>
using namespace std;

class Color
{
public:
	void setColor(int clolorCode) {
		cout << "\033[" << clolorCode << "m";
	}

	void resetColor() {
		cout << "\033[0m";
	}

};

