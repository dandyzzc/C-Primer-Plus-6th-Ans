#include<iostream>
using namespace std;

int main()
{
	const double MILES_PER_100KM = 62.14;
	const double LITER_PER_GALLON = 3.875;

	double liter_per_100KM;
	double km_per_gallon;
	cout << " Enter the Fuel consumption per 100 kilometer is(in liter): ";
	cin >> liter_per_100KM;
	km_per_gallon = liter_per_100KM * MILES_PER_100KM*LITER_PER_GALLON;
	cout << " The Distance per gallon is(in miles) " << km_per_gallon << endl;
	
	

	return 0;
}