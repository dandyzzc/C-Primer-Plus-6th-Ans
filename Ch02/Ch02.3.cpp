#include<iostream>
#include<string>
using namespace std;

void print1stMessage();
void print2ndMessage();
int main()
{
		print1stMessage();
		print2ndMessage();
		return 0;
}

void print1stMessage()
{
	string Message1 = " Three blind mice " ;
	for (int i = 0; i < 2; i++)
	{
		cout << Message1 << endl;
	}
}
void print2ndMessage()
{
	string Message2 = " See how they run " ;
	for (int i = 0; i < 2; i++)
	{
		cout << Message2 << endl;
	}
}

