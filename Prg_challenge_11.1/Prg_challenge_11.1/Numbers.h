#ifndef NUMBERS_H
#define NUMBERS_H

#include <string>

using namespace std;

class Numbers
{
private:
	int number;
	static const string lessThan20[];
	string hundred;
	string thousand;

public:
	Numbers(int);
	void print(int);

};

#endif