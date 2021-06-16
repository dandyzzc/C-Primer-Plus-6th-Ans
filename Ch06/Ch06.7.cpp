#include<iostream>
#include<string>
#include<cctype>




int main()
{
	using namespace std;

	string word;
	int num_vowels=0;
	int num_consonants=0;
	int num_others=0;
	cout << "Enter words (q to quit): " << endl;
	
	while (cin >> word&& word!="q")
	{
		if (isalpha(word[0]))
		{
			char ch;
			ch = tolower(word[0]);
			switch (ch)
			{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			        num_vowels++;
				    break;
			default:
				num_consonants++;

			}
		
		}
		else
		{
			num_others++;
		}
		

	}
	cout << num_vowels << " words beginning with vowels" << endl;
	cout << num_consonants << " words beginning with consonants" << endl;
	cout << num_others << " others" << endl;
	
	return 0;
}