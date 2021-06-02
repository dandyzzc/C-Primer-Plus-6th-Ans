#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>


using namespace std;


int main()
{
	
	string fname, lname;
	string name;
	

	cout << "What is your first name? _\b";
	getline(cin, fname);
	
	cout << "What is your last name? _\b";
	getline(cin, lname);

	name = fname + ", " + lname;

	cout << "Here's the information in a single string: " << name << endl;


	

	return 0;


}


