#include "myLib.h"

#include <iostream>

using namespace std;

// Reading Functions

void readArrayNumbers(float nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> nums[i];
    }
}
int readNumberOfElements()
{
    int n;
    do
    {
        cout << "Enter The Number Of Elements You Want: ";
        cin >> n;
    } while (n < 1);
    return n;
}
int readPositiveNumber(string msg)
{
    int x = 0;
    do
    {
        cout << msg;
        cin >> x;
        if (x <= 0)
            cout << "Negative Values Is Not Allowed!\n\n";

    } while (x <= 0);
    return x;
}
float readNumberInRange(float from, float to, string msg)
{
    int x = 0;
    bool flag;
    do
    {
        cout << msg;
        cin >> x;

        flag = validateNumInRange(x, from, to);
        if (!flag)
            cout << "Not In Allowed Range!\n";

    } while (!flag);
    return x;
}
float readNumber(string msg)
{
    float number = 0;
    cout << msg << endl;
    cin >> number;
    return number;
}

// Validation Functions

bool isEven(int n)
{
    return (n % 2 == 0);
}
bool isPrime(int num)
{

    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return false;

    return true;
}
bool validateNumInRange(float num, float from, float to)
{
    return (num >= from && num <= to);
}
bool isPerfect(int n)
{
    return (n == calcSumOfDivisors(n));
}

// Conversions

int secondsToDays(int seconds)
{
    return seconds / (60 * 60 * 24);
}
int secondsToHours(int seconds)
{
    return seconds / (60 * 60);
}
int secondsToMinutes(int seconds)
{
    return seconds / 60;
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

// Calculations

int sumNumbersInRange(int from, int to, enWhatToSome condition)
{
    int sum = 0;

    // Sum Even Numbers (Or All)
    if (condition == enWhatToSome::Even || condition == enWhatToSome::All)
        for (int i = isEven(from) ? from : from + 1; i <= to; i += 2)
            sum += i;

    // Sum Odd Numbers (Or Even)
    if (condition == enWhatToSome::Odd || condition == enWhatToSome::All)
        for (int i = !isEven(from) ? from : from + 1; i <= to; i += 2)
            sum += i;

    return sum;
}
int calcSumOfDivisors(int n)
{
    int s = 0;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0)
            s += i;
    return s;
}

// Other Functions

void swap(float &x, float &y)
{
    float temp = x;
    x = y;
    y = temp;
}
