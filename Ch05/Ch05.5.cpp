#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;


int main()
{
	string Months[12] =
	{
		"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"
	};
	int sales[12] = {};
	int total=0;
	for (int i = 0; i < 12; i++)
	{
		cout << Months[i] << ": _\b";
		cin >> sales[i];
		
		total += sales[i];
	}
	
	cout << "So this year we sold " << total << " books for all.\n";
	return 0;
}






