#include <iostream>
#include "../../myLib.h"
using namespace std;

void printInReversed(int n)
{
    n = abs(n);

    while (n != 0)
    {
        cout << n % 10 << endl;
        n /= 10;
    }
}

int main()
{
    int n;
    n = readNumber("Inter Any Number (Integer): ");

    printInReversed(n);
}