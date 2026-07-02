#include <iostream>
#include "../../myLib.h"
using namespace std;

// Added To Library

/* int reverseNumber(int number)
{
    int n = abs(number);
    int res = 0;

    while (n > 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }

    return number > 0 ? res : -1 * res;
}
*/

void printInReversed(int n)
{
    cout << "Reversed Version Of " << n << " is: " << reverseNumber(n);
}

int main()
{
    int n;
    n = readNumber("Inter Any Number (Integer): ");

    printInReversed(n);
}