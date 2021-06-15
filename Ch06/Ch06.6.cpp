#include<iostream>
#include<string>
using namespace std;

struct info
{
	string name;
	double donation;
};


int main()
{
	int num_donors=0;
	int num_Grand=0;
	int num_Patrons=0;
	cout << "Please enter the number of donors: ";
	cin >> num_donors;
	
	info*donor = new info[num_donors];
	
	
	for (int i = 0; i < num_donors; i++)
	{
		cin.get();
		cout << "Please enter the name of the " << i + 1 << " donor: ";
		getline(cin, donor[i].name);
		cout << "Please enter the donation of the " << i + 1 << " donor: ";
		cin >> donor[i].donation;
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
	
	return 0;
	
	
}