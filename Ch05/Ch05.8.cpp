#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstring>

using namespace std;

const int Strlen = 30;
int main()
{
	char word[Strlen] = {};
	int sum = 0;
	cout << "Enter words (to stop, type the word done): " << endl;
	cin >> word;
	/*
	strcmp(str1,str2) 
	如果返回值小于 0，则表示 str1 小于 str2。
	如果返回值大于 0，则表示 str1 大于 str2。
	如果返回值等于 0，则表示 str1 等于 str2。
	*/
	while (strcmp(word, "done")!=0)
	{
		
			sum++;
			cin >> word;
	
		
	}
	cout << "You entered a total of " << sum << " words." << endl;
	

 return 0;
}






