#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>


using namespace std;
struct Candybar
{
	string brand;
	double weight;
	int calories;
};

int main()
{
	Candybar snack=
	{
		"Mocha Munch",
		2.3,
		350
	};

	cout << "Brand: " << snack.brand<<endl;
	cout << "Weight: " << snack.weight<<endl;
	cout << "Calories: " << snack.calories << endl;

	return 0;
}