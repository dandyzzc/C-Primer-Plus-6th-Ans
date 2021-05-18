#include<iostream>
using namespace std;
double Convert(double lightyears);

	int main()
	{
		double lightyears;
		cout << " Enter the number of light years: ";
		cin >> lightyears;
		cout << lightyears << " light years = " << Convert(lightyears) << " astronomical units. " << endl;
		return 0;


	}
	double Convert(double  lightyears)
	{
		double astronomical;
		astronomical = 63240* lightyears;
		return astronomical;
	}
