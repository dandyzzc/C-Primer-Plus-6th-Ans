#include <iostream>
#include<cctype>
using namespace std;
 
int main()
{
	char ch;
	cout << "Please enter your input (type @ to stop): ";
	cin.get(ch);
	while (ch != '@') {
		if (isupper(ch))
		{
			ch = tolower(ch);
		}
		else if (islower(ch))
		{
			ch = toupper(ch);
		}
		if (isdigit(ch) == false)
		{
			cout << ch;
		}
		cin.get(ch);
	}
	

	

	return 0;
}






