#include<iostream>
using namespace std;


int main()
{
	
	int income;
	double tax;
	cout << "Input your salary income: _\b";
	
	while(cin >> income && income>=0)
	{
		
		if (income <= 5000)
		{
			tax = income * 0.00;
		}
		else if (income > 5000 && income <= 15000)
		{
			tax = (income-5000)* 0.10;
		}
		else if (income > 15000 && income <= 35000)
		{
			tax = 10000 * 0.10 + (income-15000) * 0.15;
		}
		else
		{
			tax= 10000 * 0.10 + 20000 * 0.15+(income-35000)*0.2;

		}
		cout << "Your tax is " << tax << endl;
		cout << "Input your salary income: _\b";
	}
	
		cout << "Invalid input" << endl;
		cout << "Bye~" << endl;
    
	   return 0;
	
	
}