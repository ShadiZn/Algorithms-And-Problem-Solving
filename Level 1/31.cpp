#include <iostream>
#include <cmath>
using namespace std;

float readNumber()
{
    float x;
    cout << "Enter Number: ";
    cin >> x;
    return x;
}

float power(float n, float p) // n^p
{
    float res = 1;
    for (int i = 1; i <= p; i++)
        res *= n;
    return res;
}

void printResult(float num)
{

    cout << num << "^2 = " << power(num, 2) << endl;
    cout << num << "^3 = " << power(num, 3) << endl;
    cout << num << "^4 = " << power(num, 4) << endl;
}

int main()
{
    float num = readNumber();

    printResult(num);

    return 0;
}

/*
Write a program to ask the user to enter:
• Number
Then Print the Number^2 , Number^3 , Number^4
Example Inputs:
3
Outputs:
9
27
81

*/