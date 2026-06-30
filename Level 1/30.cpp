#include <iostream>
using namespace std;

int readPositiveNumber()
{
    int n;
    do
    {
        cout << "\nEnter Positive Number: ";
        cin >> n;
    } while (n < 0);
    return n;
}

long long calcFactorial(int n)
{
    long long res = 1;
    for (int i = 1; i <= n; i++)
        res *= i;

    return res;
}

void printFactorial(int n)
{

    cout << n << "! = " << calcFactorial(n) << endl;
}

int main()
{
    int n = readPositiveNumber();
    printFactorial(n);
}