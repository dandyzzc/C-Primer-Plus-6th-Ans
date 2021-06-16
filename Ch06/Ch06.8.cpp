#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;


int main()
{
	
	ifstream inFile;
	inFile.open("happy.txt");
	if (!inFile.is_open())
	{
		cout << "Could not open the file " << endl;
		cout << "Program terminating" << endl;
		exit(EXIT_FAILURE);
	}
	char word;
	int sum=0;
	while (inFile>>word && inFile.good())
	{
		
			sum++;
		
	}
	if (inFile.eof())
	{
		cout << "End of file reached." << endl;
	}

	if (sum == 0)
	{
		cout << "no characters are found." << endl;
	}
	else
	{
		cout << "There are " << sum << " characters are found." << endl;
	}

	inFile.close();

	return 0;
}