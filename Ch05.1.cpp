#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>


using namespace std;


int main()
{
	int a, b = 0;
	int sum = 0;
	cout << "Please enter two integer: "<<endl;
	cout << "Enter the first number: _\b";
	cin >> a;
	cout << "Enter the second number: _\b";
	cin >> b;

	for (int i = a; i <= b; i++)
	{
		sum += i;
	}
	cout << "The total sum of " << a << " to " << b << " is " << sum<<endl;
	
	
	return 0;
}