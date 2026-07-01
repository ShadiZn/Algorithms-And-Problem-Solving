#include <iostream>
using namespace std;

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

int calcSumOfDivisors(int n)
{
    int s = 0;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0)
            s += i;
    return s;
}

bool isPerfect(int n)
{
    return (n == calcSumOfDivisors(n));
}

void printIfPerfect(int n)
{
    if (isPerfect(n))
        cout << "Number " << n << " is Perfect!\n";
    else
        cout << "Number " << n << " is Not Perfect!\n";
}

int main()
{
    int n = readPositiveNumber("Enter Positive Number: ");
    printIfPerfect(n);
}