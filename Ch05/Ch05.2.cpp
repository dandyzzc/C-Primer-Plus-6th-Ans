#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<array>

const int number = 101;
using namespace std;


int main()
{
	
	array<long double, number>factorial;
	factorial[1] = factorial[0] = 1LL;
	for (int i = 2; i < number; i++)
	{
		factorial[i] = i * factorial[i - 1];
	}
	for (int i = 0; i < number; i++)
	{
		cout << i << " != " << factorial[i] << endl;
	}
	
	
	return 0;
}