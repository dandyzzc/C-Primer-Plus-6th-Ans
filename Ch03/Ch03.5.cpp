#include<iostream>
using namespace std;

int main()
{
	long long int world_ppl;
	long long int country_ppl;
	double proportion;

	cout << " Enter the world's population: ";
	cin >> world_ppl;
	cout << " Enter the population of the US: ";
	cin >> country_ppl;
	proportion = double(country_ppl) / double(world_ppl)*100;
	cout << " The population of the US is " << proportion <<"% "<< " of the world population. " << endl;

	return 0;
}