#include<iostream>
#include<string>
using namespace std;
int convert(int Year);
int main()
{
	int age;
	string Message = " Enter your age: ";
	cout << Message;
	cin >> age;
	cout << " You are " << convert(age) << " months old " << endl;
}
int convert(int Year)
{
	int Month;
	Month = Year * 12;
	return Month;
}