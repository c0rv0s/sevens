#include <iostream>
#include "conio.h"
using namespace std;

int main()
{

	int quantity;
	int lastSeven = -1;
	int firstSeven = -1;
	int count = 1;

	cout << "How many numbers will be entered? ";
	cin >> quantity;

	while (count <= quantity) {
		int num;
		cout << "Enter num: ";
		cin >> num;
		if (firstSeven == -1) {
			if (num == 7)
				firstSeven = count;
		}
		if (num == 7)
			lastSeven = count;
		count++;

	}

	if (lastSeven == -1)
		cout << "Sorry, no sevens were entered." << endl;
	else {
		cout << "The first 7 was in position " << firstSeven << endl;
		cout << "The last 7 was in position " << lastSeven << endl; 
	}

	_getch();
}
