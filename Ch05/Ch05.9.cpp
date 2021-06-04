#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	int sum = 0;
	cout << "Enter words (to stop, type the word done): " << endl;
	cin >> word;
	
	while (word!="done")
	{
		
			sum++;
			cin >> word;
	
		
	}
	cout << "You entered a total of " << sum << " words." << endl;
	

 return 0;
}






