#include<iostream>
using namespace std;

void Convert(int hours, int minutes);
int main()
{
	int hours; 
	int minutes;
	cout << " Enter the number of hours: ";
	cin >> hours;
	cout << " Enter the number of minutes: ";
	cin >> minutes;
	Convert(hours,minutes);
}

void Convert(int hours, int minutes)
{
	cout << " Time: " << hours << ":" << minutes << endl;
}