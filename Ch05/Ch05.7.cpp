#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;


int main()
{
	int num;
	cout << "How many cars do you wish to catalog? ";
	(cin >> num).get();
 struct car
 {
	 string brand;
	 int year;
 };

 car*Amount = new car[num];
 for (int i = 0; i < num; i++)
 {
	
	 cout << "Car #" << (i + 1) <<": "<< endl;
	 cout << "Please enter the make: ";
	 getline(cin,Amount[i].brand);
	 cout << "Please enter the year made: ";
	 cin >> Amount[i].year;
	 cin.get();
	 
 }
 cout << endl;

 cout << "Here is your collection: " << endl;
 for (int i = 0; i < num; i++)
 {
	 cout << Amount[i].year << "\t" << Amount[i].brand << endl;
 }
 
 delete [] Amount;

 return 0;
}






