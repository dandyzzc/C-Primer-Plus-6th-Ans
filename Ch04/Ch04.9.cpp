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
	Candybar* snack = new Candybar[3];
	snack[0] = {"Mocha Munch",2.3,350};
	snack[1] = {"Mocha Munch",2.3,350};
	snack[2] = {"Mocha Munch",2.3,350};
	
	for (int i = 0; i < 3; i++)
	{
		cout << "Brand: " << snack[i].brand << endl;
		cout << "Weight: " << snack[i].weight << endl;
		cout << "Calories: " << snack[i].calories << endl;
		cout << endl;
	}

	delete[]snack;
	return 0;
}