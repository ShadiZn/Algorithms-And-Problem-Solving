#include <iostream>
#include <string>
#include "../../myLib.h"

using namespace std;

// Added To Library

/* int calcSumOfDigits(int number)
{
    int sum = 0;
    number = abs(number);

    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }

    return sum;
} */

void printSumOfDigits(int number)
{
    cout << "Sum Of Digits = " << calcSumOfDigits(number) << endl;
}

int main()
{
    int number = readNumber("Enter Any Number (Integer): ");
    printSumOfDigits(number);
}