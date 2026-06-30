#include <iostream>
using namespace std;

int readPositiveNumber(string msg)
{
    int x;
    do
    {
        cout << msg;
        cin >> x;
        if (x <= 0)
            cout << "Negative Values Is Not Allowed!\n";

    } while (x <= 0);
    return x;
}

bool isPrime(int num)
{

    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return false;

    return true;
}

void printIfPrime(int num)
{
    if (isPrime(num))
        cout << "\nPrime\n"
             << endl;
    else
        cout << "\nNot Prime\n"
             << endl;
}

int main()
{
    int num = readPositiveNumber("Enter A Number: ");

    printIfPrime(num);
}

/*
Write a program to read a number and check if it is a prime number or not.
Note: Prime number can only divide on one and on itself.
Input
5
6
3
Outputs
Prime
Not Prime
Prime

*/