#include <iostream>
using namespace std;

int readPositiveNumber(string msg)
{
    int x;
    do
    {
        cout << msg;
        cin >> x;
        if (x <= 0)
            cout << "Negative Values Is Not Allowed!\n\n";

    } while (x <= 0);
    return x;
}

float hoursToDays(float hours)
{
    return hours / 24;
}

float hoursToWeeks(float hours)
{
    return hours / 24 / 7;
}

float daysToWeeks(float days)
{
    return days / 7;
}

void printWeekAndDays(int hours)
{
    cout << "Number of Weeks Is: " << hoursToWeeks(hours) << endl;
    cout << "Number of Day Is: " << hoursToDays(hours) << endl;
}

int main()
{
    int hours = readPositiveNumber("Enter Number Of Hours: ");
    printWeekAndDays(hours);
    return 0;
}

/*
Write a program to read a NumberOfHours and calculates the number
of weeks, and days included in that number

Input:
365
Outputs:
2.17 Weeks
15.20 Days
*/