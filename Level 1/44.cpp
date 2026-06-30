#include <iostream>
using namespace std;

enum enWeekDays
{
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

float readNumberInRange(float from, float to, string msg)
{
    int x;
    bool flag;
    do
    {
        cout << msg;
        cin >> x;

        flag = (x >= from && x <= to);
        if (!flag)
            cout << "\nNot In Allowed Range!\n";

    } while (!flag);
    return x;
}

void printWeekMenu()
{
    cout << "\n****************************************\n\n";
    cout << "(1) Sunday\n";
    cout << "(2) Monday\n";
    cout << "(3) Tuseday\n";
    cout << "(4) Wednesday\n";
    cout << "(5) Thursday\n";
    cout << "(6) Friday\n";
    cout << "(7) Saturday\n";
    cout << "\n****************************************\n";
}

void enterDay(enWeekDays *day)
{
    printWeekMenu();

    *day = (enWeekDays)readNumberInRange(1, 7, "\nEnter Day Number: ");
}

void printDayName(enWeekDays day)
{
    string res;
    switch (day)
    {
    case enWeekDays::Sunday:
        res = "\nSunday\n";
        break;
    case enWeekDays::Monday:
        res = "\nMonday\n";
        break;
    case enWeekDays::Tuesday:
        res = "\nTuesday\n";
        break;
    case enWeekDays::Wednesday:
        res = "\nWednesday\n";
        break;
    case enWeekDays::Thursday:
        res = "\nThursday\n";
        break;
    case enWeekDays::Friday:
        res = "\nFriday\n";
        break;
    case enWeekDays::Saturday:
        res = "\nSaturday\n";
        break;
    default:
        res = "\nWrong Day!\n";
    }

    cout << res << endl;
}

int main()
{
    enWeekDays day;
    enterDay(&day);
    printDayName(day);
}

/*
Write a program to ask the user to enter:
• Day
Then print the day as follows:
• 1 Print Sunday
• 2 Print Monday
• 3 Print Tuesday
• 4 Print Wednesday
• 5 Print Thursday
• 6 Print Friday
• 7 Print Saturday
• Otherwise print “Wrong Day” and ask the use to enter the day again.
Example Inputs:
6
Outputs
Its Friday
*/