#include <iostream>
#include <cmath>
using namespace std;
const unsigned int secPerDay = 60 * 60 * 24;
const unsigned short secPerHour = 60 * 60;
const unsigned short secPerMinute = 60;

enum enTime
{
    second,
    minute,
    hour,
    day
};

struct stTime
{
    int days;
    int hours;
    int minutes;
    int seconds;
};

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

int daysFromSecond(int seconds)
{
    return seconds / secPerDay;
}
int hoursFromSecond(int seconds)
{
    return seconds / secPerHour;
}
int minutesFromSecond(int seconds)
{
    return seconds / secPerMinute;
}

int calcReminderSeconds(int seconds, enTime from)
{
    int res;
    switch (from)
    {
    case day:
        res = seconds % secPerDay;
        break;
    case hour:
        res = seconds % secPerHour;
        break;
    case minute:
        res = seconds % secPerMinute;
        break;
    default:
        res = 0;
        break;
    }
    return res;
}

stTime calcTimeFromSeconds(int totalSeconds)
{

    stTime time;

    int reminderSeconds = totalSeconds;

    time.days = daysFromSecond(reminderSeconds);
    reminderSeconds = calcReminderSeconds(reminderSeconds, enTime::day);
    time.hours = hoursFromSecond(reminderSeconds);
    reminderSeconds = calcReminderSeconds(reminderSeconds, enTime::hour);
    time.minutes = minutesFromSecond(reminderSeconds);
    reminderSeconds = calcReminderSeconds(reminderSeconds, enTime::minute);
    time.seconds = reminderSeconds;

    return time;
}

void printTimeFromSeconds(int totalSeconds)
{
    stTime time = calcTimeFromSeconds(totalSeconds);
    cout << time.days << ":" << time.hours << ":" << time.minutes << ":" << time.seconds << endl;
    cout << endl;
}

int main()
{
    int totalSeconds = inputPositive("Enter Total Seconds: ", "\nWrong Input\n");

    printTimeFromSeconds(totalSeconds);

    return 0;
}

/*

Write a program that inputs the number of seconds  and changes it to days, hours, minutes, and seconds
Input
193,535
Output 
2:5:45:35
*/