#include<iostream>
#include<string>


using namespace std;


int main()
{
	
	string fname, lname;
	int age;
	char grade;
	

	cout << "What is your first name? _\b";
	getline(cin,fname);
	
	cout << "What is your last name? _\b";
	getline(cin,lname);
	
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


