// roadmap_p43.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


struct stTaskDuration { int days, hours, minutes, seconds; };

int readSeconds()
{
	int totalseconds;
	cout << " Please , Enter number of seconds \n ";
	cin >> totalseconds;
	return totalseconds;

}

stTaskDuration calcDays_Hours_Minutes_Seconds(int totalseconds)
{
	stTaskDuration taskduration ;

	const int secondsperday = 24 * 60 * 60;
	const int secondsperhour =  60 * 60;
	const int secondsperminute =  60 ;

	int remainder = 0; 

	taskduration.days = floor(totalseconds / secondsperday);
	remainder = totalseconds % secondsperday;

	taskduration.hours = floor(remainder / secondsperhour);
	remainder = remainder % secondsperhour;

	taskduration.minutes = floor(remainder / secondsperminute);
	remainder = remainder % secondsperminute;

	taskduration.seconds = remainder;

	return taskduration;
	
}

void printTaskDUrationDetails(stTaskDuration taskduration)
{
	cout << "\n";

	cout << taskduration.days << ":" << taskduration.hours << ":" << taskduration.minutes << ":" << taskduration.seconds << endl;


}


int main()
{


	printTaskDUrationDetails(calcDays_Hours_Minutes_Seconds(readSeconds()));

}
