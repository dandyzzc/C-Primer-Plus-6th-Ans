#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;


int main()
{
	string Months[3][12] =
	{
		{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"},
		{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"},
		{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}
	};
	string year[3] = { "first year: ","second year: ","third year: " };
	int sales[3][12] = {};
	int total[3] = {};
	int sum=0;
	for (int i = 0; i < 3; i++)
	{
		cout << "The " << year[i] << endl;
		for (int i = 0; i < 10; i++)
		{
			cout << "*";
		}
		cout << endl;
		for(int j =0;j<12;j++)
		{
			cout << Months[i][j] << ": _\b";
			cin >> sales[i][j];
			total[i] += sales[i][j];
		}
		cout << "So this year we sold " << total[i] << " books for all.\n";
		sum += total[i];
	}
	cout << endl;
	
	cout << "These 3 year we sold " << sum << " books " << endl;
	return 0;
}






