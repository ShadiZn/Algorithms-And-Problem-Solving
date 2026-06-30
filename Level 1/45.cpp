#include <iostream>
using namespace std;

enum enMonth
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
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
            cout << "Not In Allowed Range!\n";

    } while (!flag);
    return x;
}

enMonth enterMonth()
{

    return (enMonth)readNumberInRange(1, 12, "Enter Month Number: ");
}

void printMonthName(enMonth month)
{
    string res;
    switch (month)
    {
    case enMonth::January:
        res = "January";
        break;
    case enMonth::February:
        res = "February";
        break;
    case enMonth::March:
        res = "March";
        break;
    case enMonth::April:
        res = "April";
        break;
    case enMonth::May:
        res = "May";
        break;
    case enMonth::June:
        res = "June";
        break;
    case enMonth::July:
        res = "July";
        break;
    case enMonth::August:
        res = "August";
        break;
    case enMonth::September:
        res = "September";
        break;
    case enMonth::October:
        res = "October";
        break;
    case enMonth::November:
        res = "November";
        break;
    case enMonth::December:
        res = "December";
        break;
    default:
        res = "Wrong Month!";
    };
    cout << res << endl;
}

int main()
{
    enMonth month = enterMonth();
    printMonthName(month);
}

/*
Write a program to ask the user to enter:
• Month
Then print the day as follows:
• 1 Print January
• 2 Print February
• 3 Print March
• 4 Print April
• 5 Print May
• 6 Print June
• 7 Print July
• 8 Print August
• 9 Print September
• 10 Print October
• 11 Print November
• 12 December
• Otherwise print “Wrong Month” and ask the use to enter the Month again.
Example Inputs:
11
Outputs
November
*/