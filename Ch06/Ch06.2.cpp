#include <iostream>
#include<array>
using namespace std;
 
const int Size = 10;
int main()
{
	int length=0;
	int larger_num=0;
	double sum=0;
	double average=0;
	array<double, Size> donation;

	cout << "Please input 10 donations:(non-number to exit): "<<endl;
	for (int i = 0; i < 10; i++)
	{
		
		cin >> donation[i];
		if (cin.fail())
		{
			cout << "Not a digit!" << endl;
			break;
		}
		
		sum += donation[i];
		length++;
		average = sum / length;
	}
	
	for (int i = 0; i < 10; i++)
	{
		if (donation[i] > average)
		{
			larger_num++;
		}
	}
	
	cout << "Average is " << average << endl;
	cout << "There are " << larger_num << " larger than average " <<endl;

	
	return 0;
}







