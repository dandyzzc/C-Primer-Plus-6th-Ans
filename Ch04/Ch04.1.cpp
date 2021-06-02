#include<iostream>
using namespace std;
const int N = 30;

int main()
{
	
	char fname[N], lname[N];
	int age;
	char grade;
	

	cout << "What is your first name? _\b";
	cin.get(fname,N);
	cin.get();
	
	cout << "What is your last name? _\b";
	cin.getline(lname,N);
	
	cout << "What letter grade do you desever? _\b";
	cin.get(grade);
	cin.get();
	cout << "What is your age? _\b";
	cin >> age;

	cout << "Name: " << lname << ", " << fname << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age << endl;



	return 0;


}


