#define _CRT_SECURE_NO_WARNINGS
#include<iostream>


using namespace std;


int main()
{
	double num;
	double sum=0;
	cout << "Please enter a number (0 to exit)" << endl;
	cin >> num;
	for (;num != 0;cin>>num)
	{
		sum += num;
		
		cout << "Now the total sum is " << sum << endl;
	}
	cout << "Done!" <<endl;

	
	
	return 0;
}