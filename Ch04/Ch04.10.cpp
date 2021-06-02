#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<array>

const int number = 3;
using namespace std;


int main()
{
	double average;

	array<double, number>arr;
	
	cout << "Enter your first grade: ";
	cin >> arr[0];
	cout << "Enter your second grade: ";
	cin >> arr[1];
	cout << "Enter your third grade: ";
	cin >> arr[2];
	
	average = (arr[0] + arr[1] + arr[2]) / 3.0;
	cout << "The whole number or the grade is " << number << endl;
	cout << "The grades are " << arr[0] <<", "<< arr[1] << ", " << arr[2] << endl;
	cout << "The average grade is " << average << endl;
	
	return 0;
}