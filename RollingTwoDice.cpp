//Jean - Michel Rusangiza,
// Rolling two six-sided dice 36,000 times
#include <iostream>
#include <iomanip>
#include <array>
#include <cstdlib>
#include <stddef.h>
using namespace std;


int main()
{
	int rollDice;
	
	unsigned int die1 = 1 + rand() % 6;
	unsigned int die2 = 1 + rand() % 6;

	unsigned int sum = die1 + die2;
	return sum;

	

	
	array < int, 13 > frequency = {};

	for (int roll = 1; roll <= 36000; ++roll) {
		++frequency[rollDice];
	}
	cout << "Roll" << setw(13) << "Frequency" << endl;

	for (size_t i = 2; i < frequency.size(); ++i)
	{
		cout << setw(4) << i << setw(13) << frequency[i] << endl;
	}
	system("pause");
	return 0;


}