#include<iostream>
using namespace std;
double Convert(double Celsius);

int main()
{
	double Celsius;
	cout << " Please enter a Celsius value: ";
	cin >> Celsius;
	cout << Celsius << " degrees Celsius is " << Convert(Celsius) << " degrees Fahrenheit. " << endl;
	return 0;


}
double Convert(double Celsius)
{
	double Fahrenheit;
	Fahrenheit = 1.8*Celsius + 32.0;
	return Fahrenheit;
}