#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>


using namespace std;
struct Pizza_Company
{
	string name;
	double pizza_diameter;
	double weight;
	
};

int main()
{
	Pizza_Company info;
	
	cout << "Enter the company name: ";
	getline(cin, info.name);
	cout << "Enter the diameter of pizza: ";
    	cin >> info.pizza_diameter;
	cout << "Enter the weight of pizza: ";
	cin >> info.weight;

	cout << "Company name: " << info.name << endl;
	cout << "Diameter: " << info.pizza_diameter << endl;
	cout << "Weight: " << info.weight << endl;

	return 0;
}