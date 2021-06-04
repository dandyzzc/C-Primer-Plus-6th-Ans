#define _CRT_SECURE_NO_WARNINGS
#include<iostream>


using namespace std;


int main()
{
	double Amount[2] = { 100.0,100.0 };
	 
	int year;
	for ( year = 0; Amount[0] >=Amount[1]; year++)
	{
		Amount[0] +=10.0;
		Amount[1] *= 1.05;
		
		
	}
	
	cout << year << " year later, Cleo's Amount is more than Daphne's."<<endl;

	cout << "At that time Cleo will have $" << Amount[1] << ", while Daphne will have $" << Amount[0] << ".\n";
	
	return 0;
}






