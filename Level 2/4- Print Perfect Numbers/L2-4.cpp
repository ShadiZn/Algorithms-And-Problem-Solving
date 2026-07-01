#include <iostream>
#include "../../myLib.h"
using namespace std;

void printPerfectNumbersUntil(int n)
{
    cout << "\nPerfect Numbers From 1 To " << n << " Are:\n"
         << endl;
    for (int i = 1; i <= n; i++)
    {
        if (isPerfect(i))
            cout << i << endl;
    }
}

int main()
{
    int n = readPositiveNumber("Enter Positive Number Please: ");
    printPerfectNumbersUntil(n);
}