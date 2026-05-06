// roadmap_p42.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct sttaskDuration 
{
	int days;
	int hours; 
	int minutes;
	int seconds;
};

int readPositiveNum(string message)
{
	int num = 0 ;

	do
	{
		cout << message << endl;
		cin >> num;

	} while (num < 0);

	return num;

}

sttaskDuration readTaskDuration()
{

	sttaskDuration taskduration;

	taskduration.days = readPositiveNum(" Please , Enter Number Of Days : ");
	taskduration.hours = readPositiveNum(" Please , Enter Number Of Hours : ");
	taskduration.minutes = readPositiveNum(" Please , Enter Number Of Minutes : ");
	taskduration.seconds= readPositiveNum(" Please , Enter Number Of Seconds : ");

	return taskduration;
}


int taskDurationInSeconds(sttaskDuration taskduration)
{
	int taskdurationinseconds = 0;

	taskdurationinseconds = (taskduration.days * 24 * 60 * 60) + (taskduration.hours * 60 * 60) + (taskduration.minutes * 60) + taskduration.seconds;
	return taskdurationinseconds;
}


int main()
{
	sttaskDuration currentTask = readTaskDuration();
	cout << " \n Task Duration In Seconds = " << taskDurationInSeconds(currentTask) << " sec " << endl;
}

