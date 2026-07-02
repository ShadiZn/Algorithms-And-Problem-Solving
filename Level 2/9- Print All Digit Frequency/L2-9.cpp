#include <iostream>
#include <string>
#include "../../myLib.h"
using namespace std;

void calcAllDigitsFrequency(int number, int freq[10])
{
    int digit;

    while (number > 0)
    {
        digit = number % 10;
        freq[digit]++;
        number /= 10;
    }
}

void printAllDigitsFrequency(int number)
{
    int freq[10] = {0};

    calcAllDigitsFrequency(abs(number), freq);

    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > 0)
            cout << "Digit " << i << " Frequency is " << freq[i] << " Time(s)." << endl;
    }
}

int main()
{
    int number = readNumber("Enter The Number: ");

    printAllDigitsFrequency(number);
}