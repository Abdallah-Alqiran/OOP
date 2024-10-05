#pragma once
#include <iostream>
#include <map>
#include "Color.h"


using namespace std;

class KnowExist : public Color
{
public:
	void KnowStorage(map<string, int> M)
	{
		if (M.size() == 0) {
			setColor(31);
			cout << "You don't have any thing of this item\n";
			resetColor();
		}

		else {
			setColor(36);
			cout << "You have / number:\n";
			for (auto& i : M) {
				if (i.second != 0)
					cout << i.first << ' ' << i.second << '\n';
			}
			resetColor();
		}
	}


};

