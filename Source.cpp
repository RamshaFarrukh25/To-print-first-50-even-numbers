#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	// This program prints first 50 even numbers.
	int counter;
	cout << "The first 50 Even numbers" << endl;
	for (counter = 0; counter <= 50; counter = counter + 2)
	{
		cout << counter  << endl;
	}
   return 0;
}