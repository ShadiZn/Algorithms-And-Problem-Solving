#include <iostream>
using namespace std;

float inputPositive(string inputMsg, string errMsg)
{
    float num;
    do
    {
        cout << inputMsg;
        cin >> num;
        if (num < 0)
            cout << errMsg << endl;

    } while (num < 0);

    return num;
}

struct stTime
{
    int days;
    int hours;
    int minutes;
    int seconds;
};

void readTime(stTime &duration)
{
    duration.days = inputPositive("Enter days: ", "Wrong Input!\n");
    duration.hours = inputPositive("Enter hours: ", "Wrong Input!\n");
    duration.minutes = inputPositive("Enter minutes: ", "Wrong Input!\n");
    duration.seconds = inputPositive("Enter seconds: ", "Wrong Input!\n");
}

int calcDurationInSec(stTime duration)
{
    const int secInMinute = 60;
    const int secInHour = 60 * secInMinute;
    const int secInDay = 24 * secInHour;

    return duration.days * secInDay + duration.hours * secInHour + duration.minutes * secInMinute + duration.seconds;
}

void printTotalSec(stTime duration)
{
    cout << "\nThe total seconds is: " << calcDurationInSec(duration) << endl;
}

int main()
{

    stTime taskTime;
    readTime(taskTime);
    printTotalSec(taskTime);

    return 0;
}

/*
Write a program to calculate the task duration in seconds and print it on screen
Given the time duration of a task in the number of days, hours, minutes, and seconds,.
Input
2
5
45
35
Outputs
193,535 Seconds

*/