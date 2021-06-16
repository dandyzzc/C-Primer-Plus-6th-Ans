
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct info
{
	char name[30];
	double donation;
};


int main()
{
	ifstream inFile;
	inFile.open("donation.txt");
	if (!inFile.is_open())
	{
		cout << "Could not open the file " << endl;
		cout << "Program terminating" << endl;
		exit(EXIT_FAILURE);
	}
	int num_donors;

	int num_Grand = 0;
	int num_Patrons = 0;
	inFile >> num_donors;
	
	cout << "The number of donors is " << num_donors << endl;
	
	
	inFile.get();
	
	info*donor = new info[num_donors];


	for (int i = 0; i < num_donors; i++)
	{
		
		inFile.getline(donor[i].name,30);
		inFile >> donor[i].donation;
		inFile.get();
	}
	cout << "The information of donations is given below" << endl;
	cout << "***Grand Patrons***" << endl;
	for (int i = 0; i < num_donors; i++)
	{


		if (donor[i].donation >= 10000)
		{
			num_Grand++;
			cout << donor[i].name << " $" << donor[i].donation << endl;
		}

	}
	if (num_Grand == 0)
	{
		cout << " none " << endl << endl;
	}

	cout << "***Patrons***" << endl;
	for (int i = 0; i < num_donors; i++)
	{
		if (donor[i].donation < 10000)
		{
			num_Patrons++;
			cout << donor[i].name << " $" << donor[i].donation << endl;
		}
	}
	if (num_Patrons == 0)
	{
		cout << " none " << endl << endl;
	}

	delete[]donor;
	inFile.close();

	return 0;


}


