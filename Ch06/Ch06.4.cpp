#include<iostream>

using namespace std;
 
const int strsize = 50;
void showManu();
void display_name();
void display_bopname();
void display_title();
void display_pre();
struct bop {
	char fullname[strsize];//real name
	char title[strsize];//job title
	char bopname[strsize];//secret BOP name
	int preference;//0=fullname, 1=title, 2=bopname
};

bop info[5] = {
		{ "Wimp Macho" ,"CEO" ,"Sand" ,0 },
		{ "Raki Rhodes", "VC", "X", 1},
		{ "Celia Laiter", "CTO", "C", 1 },
		{ "Hoppy Hipman", "CFO", "O", 2 },
		{ "Pat Hand" ,"CPO" ,"Nor",1 }

};

int main()
{
	showManu();
	char choice;
	while(cin.get(choice)&&choice!='q')
	{
		switch (choice)
		{
		case'a':
		case'A':
			display_name();
			break;
		case'b':
		case'B':
			display_title();
			break;
		case'c':  
		case'C':
			display_bopname();
			break;
		case'd': 
		case'D':
			display_pre();
			break;
		default:
			cout << "Your input is incorrect！Please try again" << endl;
		}

		cin.get(choice);
	}

	cout << "Bye!" << endl;
	return 0;
}


void showManu()
{
	cout << "Please choose one of following:" << endl;
	cout << "a. display by name\t" << "b. display by title" << endl;
	cout << "c. display by bopname\t" << "d. display by tpreference" << endl;
	cout << "q. quit" << endl;
}
void display_name() {
	for (int i = 0; i < 5; ++i) {
		cout << info[i].fullname << endl;
	}

}
void display_bopname() {
	for (int i = 0; i < 5; ++i) {
		cout << info[i].bopname << endl;
	}
}
void display_title() {
	for (int i = 0; i < 5; ++i) {
		cout << info[i].title << endl;
	}
}
void display_pre() {
	for (int i = 0; i < 5; ++i)
	{
		if (info[i].preference == 0)
			cout << info[i].fullname << endl;
		else if (info[i].preference == 1)
			cout << info[i].title << endl;
		else
			cout << info[i].bopname << endl;
	}
}