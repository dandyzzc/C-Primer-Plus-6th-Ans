#include<iostream>
using namespace std;

int main()
{
	const double MILES_PER_100KM = 62.14;
	const double LITER_PER_GALLON = 3.875;
	double dis_miles;
	double gas_gallon;
	double liter_per_100KM;
	cout << " Enter the distance(miles): ";
	cin >> dis_miles;
	cout << " Enter volume of gasoline(gallon): ";
	cin >> gas_gallon;
	liter_per_100KM = (gas_gallon* LITER_PER_GALLON) / (dis_miles / MILES_PER_100KM);
	cout << " Fuel consumption per 100 kilometer is(in liter) " << liter_per_100KM << endl;

	return 0;
}