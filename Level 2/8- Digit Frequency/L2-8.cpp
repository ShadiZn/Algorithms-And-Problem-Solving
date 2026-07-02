#include <iostream>
#include <string>
#include "../../myLib.h"
using namespace std;

// Added To My Library

/*int calcDigitFrequency(int num, int digit)
{
    int res = 0;
    num = abs(num);
    while (num > 0)
    {

        if (num % 10 == digit)
            res++;

        num /= 10;
    }
    return res;
}*/

void printDigitFrequency(int number, int digit)
{
    cout << "Digit " << digit << " Frequency is " << calcDigitFrequency(number, digit) << " Time(s).";
}

int main()
{
    int number = readNumber("Enter The Number: ");
    short digit = readNumberInRange(0, 9, "Enter One Digit: ");

    printDigitFrequency(number, digit);
}