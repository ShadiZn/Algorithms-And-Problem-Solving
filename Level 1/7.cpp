#include <iostream>
using namespace std;

float readNumber()
{
    float num;
    cout << "Enter Any Number: ";
    cin >> num;
    return num;
}

float calcHalf(float num)
{
    return (float)num / 2;
}

void printHalf(float num)
{

    cout << "Half of " + to_string(num) << " is " + to_string(calcHalf(num)) << endl;
}

int main()
{

    float num = readNumber();
    printHalf(num);

    return 0;
}