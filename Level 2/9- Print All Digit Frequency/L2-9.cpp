#include <iostream>
#include <string>
#include "../../myLib.h"
using namespace std;

void calcDigitsFrequency(int number, int freq[10], bool flags[10])
{
    int digit, number2 = number;

    while (number2 > 0)
    {
        digit = number2 % 10;

        if (!flags[digit])
        {
            freq[digit] = calcDigitFrequency(number, digit);
            flags[digit] = true;
        }
        number2 /= 10;
    }
}

void printAllDigitsFrequency(int number)
{
    int freq[10];
    bool flags[10];

    fill(begin(flags), end(flags), 0);
    fill(begin(freq), end(freq), 0);

    calcDigitsFrequency(number, freq, flags);

    for (int i = 0; i < 10; i++)
    {
        if (flags[i])
            cout << "Digit " << i << " Frequency is " << freq[i] << " Time(s)." << endl;
    }
}

int main()
{
    int number = readNumber("Enter The Number: ");

    printAllDigitsFrequency(number);
}