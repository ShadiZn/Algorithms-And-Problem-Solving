#include <iostream>
#include "../../myLib.h"
using namespace std;

// Added To My Library

/* bool isPalindrome(int number)
{
    return number == reverseNumber(number);
}*/

void printIfPalindrome(int number)
{
    if (isPalindrome(number))
        cout << "\nYes, It is a palindrome Number!\n";
    else
        cout << "\nNo, It is NOT a palindrome Number!\n";
    cout << endl;
}

int main()
{
    int number = readNumber("Enter any Integer Number: ");
    printIfPalindrome(number);
}