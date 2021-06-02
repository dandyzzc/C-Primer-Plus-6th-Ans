#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>


using namespace std;
const int N = 30;

int main()
{
	
	char fname[N], lname[N];
	char name[2*N];
	

	cout << "What is your first name? _\b";
	cin.get(fname,N);
	cin.get();
	
	cout << "What is your last name? _\b";
	cin.get(lname, N);
	cin.get();

	strcpy(name, fname);
	strcat(name, ", ");
	strcat(name, lname);

	cout << "Here's the information in asingle string: " << name << endl;


	

	return 0;


}


