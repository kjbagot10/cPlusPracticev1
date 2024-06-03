#include <iostream>

using namespace std;
void farentocel(); // must call method here for it to work in main

int main()
{
	//int sales = 10000;
	//double stateTax = sales * 0.04;
	//double countyTax = sales * 0.02;
	//double totalTax = stateTax + countyTax;
	
	//cout << "State Tax: " << stateTax << endl
		 //<< "County Tax: " << countyTax << endl
		 //<< "Total Tax: " << totalTax;
	
	farentocel();
	return 0;
}


void farentocel()
{
	cout << "Please enter number to be converted:";
	float tempToConvert;
	cin >> tempToConvert;
	float celsius = (tempToConvert - 32) * (5/9);
	cout << tempToConvert << " Farenheit is " << celsius << " Celsius.";
	
}
