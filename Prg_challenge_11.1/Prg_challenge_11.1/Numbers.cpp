#include "Numbers.h"
#include <string>
#include <iostream>

using namespace std;

const string Numbers::lessThan20[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
					"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
					"eighteen", "nineteen" };

Numbers::Numbers(int n)
{
	/*const string lessThan20[20] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
						"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
						"eighteen", "nineteen" };*/
	string hundred = "hundred";
	string thousand = "thousand";
	number = n;

	print(number);
}

void Numbers::print(int n)
{
	string dummy = to_string(n);
	char thousandths, hundredths, tenths, ones;

	if (n > 19)
	{
		if (n > 999)
		{
			thousandths = dummy[0];
			hundredths = dummy[1];
			tenths = dummy[2];
			ones = dummy[3];
		}

		else if (n > 99 && n < 1000)
		{
			thousandths = '0';
			hundredths = dummy[0];
			tenths = dummy[1];
			ones = dummy[2];
		}

		else if (n < 100)
		{
			thousandths = '0';
			hundredths = '0';
			tenths = dummy[0];
			ones = dummy[1];
		}

		if (thousandths != '0')
			cout << lessThan20[(int)thousandths-48] << " thousand ";
		if (hundredths != '0')
			cout << lessThan20[(int)hundredths-48] << " hundred ";
		if ((int)tenths - 48 == 4 || (int)tenths - 48 > 5)
		{
			if (tenths != '0' && ones != '0')
				cout << lessThan20[(int)tenths - 48] << "ty " << " " << lessThan20[(int)ones - 48];
			else if (tenths != '0' && ones == '0')
				cout << lessThan20[(int)tenths - 48] << "ty";
		}
		else if ((int)tenths - 48 == 2 )
		{
			if (tenths != '0' && ones != '0')
				cout << "twenty " << " " << lessThan20[(int)ones - 48];
			else if (tenths != '0' && ones == '0')
				cout << "twenty";
		}
		else if ((int)tenths - 48 == 3)
		{
			if (tenths != '0' && ones != '0')
				cout << "thirty " << " " << lessThan20[(int)ones - 48];
			else if (tenths != '0' && ones == '0')
				cout << "thirty";
		}
		else if ((int)tenths - 48 == 5)
		{
			if (tenths != '0' && ones != '0')
				cout << "fifty " << " " << lessThan20[(int)ones - 48];
			else if (tenths != '0' && ones == '0')
				cout << "fifty";
		}
	}
		else
			cout << lessThan20[n];

	/*if (thousandths != '0')
		cout << thousand << " thousand";
	
	if (hundredths != '0')
		cout << hundred << " hundred";

	if (tenths != '0' && n < 20)
		cout << lessThan20[]

	
	if (n > 999)		//PRINTS THE RIGHT THOUSANDTH WORD
	{
		cout << lessThan20[(int)thousandths] << " " << thousand << " ";
		if ((int)hundredths != 0)
			cout << lessThan20[(int)hundredths] << " " << hundred << " ";

	}

	if (n > 99)		//PRINTS THE RIGHT HUNDREDTH WORD
	{
		hundredths = dummy[0];
		tenths = dummy[1];
		ones = dummy[2];

		if ((int)hundredths != 0)
		{
			cout << lessThan20[(int)hundredths] << " " << hundred << " ";
		}
	}

	else if (n > 39 && n < 50 || n > 59 && n < 100)		//PRINTS THE CORRECT WORDS FOR 40,60,70,80,90
	{
		tenths = dummy[0];
		ones = dummy[1];

		cout << lessThan20[(int)tenths] << "ty " << lessThan20[(int)ones];
	}

	else if (n > 49 && n < 60)		//PRINTS THE CORRECT WORDS FOR 50
	{
		ones = dummy[1];
		cout << "fifty " << lessThan20[(int)ones];
	}


	switch (n)
	{
	case '1':
		cout << "one";
		break;
	case '2':
		cout << "two";
		break;
	case '3':
		cout << "three";
		break;
	case '4':
		cout << "four"; 
		break;
	case '5':
		cout << "five";
		break;
	case '6':
		cout << "six";
		break;
	case '7':
		cout << "seven";
		break;
	case '8':
		cout << "eight";
		break;
	case '9':
		cout << "nine";
		break;
	case '10':
		cout << "ten";
		break;
	case '11':
		cout << "eleven";
		break;
	case '12':
		cout << "twelve";
		break;
	case '13':
		cout << "thirteen";
		break;
	case '14':
		cout << "fourteen";
		break;
	case '15':
		cout << "fifteen";
		break;
	case '16':
		cout << "sixteen";
		break;
	case '17':
		cout << "seventeen";
		break;
	case '18':
		cout << "eighteen";
		break;
	case '19':
		cout << "nineteen";
		break;
	}*/
}
