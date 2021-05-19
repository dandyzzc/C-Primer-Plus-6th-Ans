#include<iostream>
using namespace std;

int main()
{
	const int MINUTES_PER_DEGREE = 60;
	const int SECONDS_PER_MINUTES = 60; 
	int degrees=0;
	int minutes=0;
	int seconds=0;
	double total_degrees=0;

	cout << " Enter a latitude in degrees, minutes, and seconds: " << endl;
	cout << " First, enter the degrees: ";
	cin >> degrees;
	cout << " Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << " Finally, enter the seconds of arc: ";
	cin >> seconds;
	total_degrees = double (degrees) + double (minutes) / MINUTES_PER_DEGREE + double(seconds) / SECONDS_PER_MINUTES / MINUTES_PER_DEGREE;

	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds " << " = " << total_degrees << " degrees " << endl;
	return 0;
}