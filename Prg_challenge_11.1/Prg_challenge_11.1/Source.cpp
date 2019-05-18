#include <iostream>
#include <string>
#include "Numbers.h"

using namespace std;

int main()
{
	int number;

	do
	{
		cout << "Please enter a number between 0-9999: ";
		cin >> number;
	} while (number < 0 || number > 9999);

	cout << "\nThe number you entered is ";

	Numbers N(number);

	cout << "\n\n";

	system("pause");
	return 0;
}