#include<iostream>
using namespace std;

int main()
{
	int Distance;
	int Yard; 
	
	cout << " 請輸入Long的數值(1 Distance = 220 Yard): ";
	cin >> Distance;
	Yard = 220 * Distance;
	cout << " " << Distance << " Distance = " << Yard << " Yard " << endl;
	return 0;
}