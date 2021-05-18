#include<iostream>
using namespace std;



int main()
{
	const double INCH_PER_FOOT = 12.0;
	int height_in_inch;
	double height_in_foot;
	
	cout << "Please enter your height(in inch):_\b ";
	cin >> height_in_inch;
	height_in_foot = height_in_inch / INCH_PER_FOOT;
	cout << "Your height in Inch is " << height_in_inch << endl;
	cout << "Your height in Foot is " << height_in_foot << endl;
	
	return 0;


}