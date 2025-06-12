#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stTaskDuration {
	int Days, Hours, Minutes, Seconds;
};

float ReadPositiveNumber(string Message){
    float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

stTaskDuration ReadTaskDuration() {
	stTaskDuration TaskDuration;
	TaskDuration.Days = ReadPositiveNumber("Please enter the number of days ?");
	TaskDuration.Hours = ReadPositiveNumber("Please enter the number of Hours ?");
	TaskDuration.Minutes = ReadPositiveNumber("Please enter the number of Minutes ?");
	TaskDuration.Seconds = ReadPositiveNumber("Please enter the number of Seconds ?");
	return TaskDuration;
}
int CalculateTaskDurationInSeconds(stTaskDuration TaskDuration){
	return TaskDuration.Days * 24 * 60 * 60 + TaskDuration.Hours * 60 * 60 +
		TaskDuration.Minutes * 60 + TaskDuration.Seconds;
}


int main() {
   
	cout << endl << CalculateTaskDurationInSeconds(ReadTaskDuration()) << " Seconds " << endl;
    return 0;
}

