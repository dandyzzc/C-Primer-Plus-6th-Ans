#include<iostream>
using namespace std;

int main()
{
	const int HOURS_PER_DAY = 24;
	const int MINUTES_PER_HOURS = 60;
	const int SECONDS_PER_MINUTES = 60;

	long long int total_sec;
	int days,hours,minutes,seconds;
	int total_min, total_hour,total_day;
	
	cout << " Enter the number of seconds: ";
	cin >> total_sec;

	//get seconds
	seconds = total_sec % SECONDS_PER_MINUTES;

	//get minutes
	total_min = total_sec / SECONDS_PER_MINUTES;
	minutes = total_min % MINUTES_PER_HOURS;

	//get hours
	total_hour = total_min / MINUTES_PER_HOURS;
	hours = total_hour % HOURS_PER_DAY;

	//get days
	total_day = total_hour / HOURS_PER_DAY;
	days = total_day;

	//output
	cout << total_sec << " seconds " << " = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds " << endl;
	


	return 0;
}