#include<iostream>
#include <cmath>
using namespace std;

int main()
{
	const double INCH_PER_FOOT = 12.0;
	const double METER_PER_INCH = 0.0254;
	const double POUND_PER_KILOGRAM = 2.2;
	double Foot;
	double Inch;
	double Pound;
	double Height_in_meter;
	double Weight_in_kg;
	double BMI;

	cout << "Please enter your height(n Foot m Inch)"<<endl;
	cout << "m:_\b";
	cin >> Foot;
	cout << "n:_\b";
	cin>> Inch;
	Height_in_meter = (Foot* INCH_PER_FOOT + Inch)*METER_PER_INCH;

	cout << "Please enter your weight(in pound)_\b";
	cin >> Pound;
	Weight_in_kg = Pound / POUND_PER_KILOGRAM;

	BMI = Weight_in_kg / pow(Height_in_meter,2);
	cout << "Your BMI is " << BMI;
	
	return 0;

	
}