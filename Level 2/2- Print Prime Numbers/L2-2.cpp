#include <iostream>
#include <string>
using namespace std;

int readPositiveNumber(string msg)
{
    int x;
    do
    {
        cout << msg;
        cin >> x;
        if (x <= 0)
            cout << "Negative Values (Or 0) Is Not Allowed!\n\n";

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

void printPrimesUntil(int n)
{
    for (int i = 1; i <= n; i++)
        if (isPrime(i))
            cout << i << endl;
}

int main()
{
    int number = readPositiveNumber("Enter Number: ");
    printPrimesUntil(number);
}