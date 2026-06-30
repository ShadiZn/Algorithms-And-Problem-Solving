#include <iostream>
using namespace std;

void readTwoNumbers(float &x, float &y)
{
     cout << "Enter Number 1: ";
     cin >> x;
     cout << "Enter Numver 2: ";
     cin >> y;
}

void swapByReference(float &x, float &y)
{
     float temp = x;
     x = y;
     y = temp;
}

void swapByPointer(float *x, float *y)
{
     float temp = *x;
     *x = *y;
     *y = temp;
}

void printNums(float num1, float num2)
{
     cout << "Number 1 is: " << num1 << endl;
     cout << "Number 2 is: " << num2 << endl;
}

int main()
{
     float num1, num2;

     readTwoNumbers(num1, num2);

     printNums(num1, num2);

     swapByReference(num1, num2);

     swapByPointer(&num1, &num2);

     printNums(num1, num2);

     return 0;
}