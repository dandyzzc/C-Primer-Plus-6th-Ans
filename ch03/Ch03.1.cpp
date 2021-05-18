#include<iostream>
using namespace std;

const double Inch_per_foot = 12.0;

int main()
{
	
	int height_in_inch;
	double height_in_foot;
	
	cout << "Please enter your height(in inch):_\b ";
	cin >> height_in_inch;
	height_in_foot = height_in_inch / Inch_per_foot;
	cout << "Your height in Inch is " << height_in_inch << endl;
	cout << "Your height in Foot is " << height_in_foot << endl;


}