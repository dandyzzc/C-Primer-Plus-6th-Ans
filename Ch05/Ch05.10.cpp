#include <iostream>
using namespace std;

int main()
{
	

	cout << "Enter number of rows: ";
	int rows;
	cin >> rows;

	for (int i = 1; i <= rows; ++i)
	{
		for (int j = 1; j <= rows; ++j)
		{
			if (rows - j >= i )
				cout << ".";
			else
				cout << "*";
		}
		cout << endl;
	}

	return 0;
}






