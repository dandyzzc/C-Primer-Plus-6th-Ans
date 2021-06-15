#include<iostream>

using namespace std;

int main()
{
	char ch;
	cout << "Please enter one of the following choices: "<<endl;
	cout << "c) carnivore\t"<<"p) pianist"<<endl;
	cout << "t) tree\t\t" << "g) game" << endl;
	cin.get(ch);
	
	while (isalpha(ch))
	{

		
		switch (ch)
		{
		case 'c':
			cout << "A lion is a carnivore. " << endl;
			break;
		case 'p':
			cout << "Tony's uncle is a pianist. " << endl;
			break;
		case 't':
			cout << "A maple is a tree. " << endl;
			break;
		case 'g':
			cout << "Apex Legends is my most favorite game. " << endl;
			break;
		default:
			cout<<"Please enter one of the following choices: " << endl;
			cin.ignore();
			

		}
	
	
		cin.get(ch);
	}
	

	return 0;
}
