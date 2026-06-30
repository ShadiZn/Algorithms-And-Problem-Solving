#include <iostream>
#include <cmath>
using namespace std;

void readNumAndPow(float &n, float &p)
{
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the power: ";
    cin >> p;
}

float power(float x, float p)
{

    return pow(x, p);
}

void printPower(float num, float m)
{
    float res = power(num, m);
    cout << num << " ^ " << m << " = " << res << endl;
}

int main()
{
    float num, m;

    readNumAndPow(num, m);

    printPower(num, m);

    return 0;
}
/*
Write a program to ask the user to enter:
• Number
• M
Then Print the Number^M
Example Inputs:
2
4
Outputs
16
*/