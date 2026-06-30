#include <iostream>
#include <string>
using namespace std;

float readNumber(string msg)
{
    float number = 0;
    cout << msg << endl;
    cin >> number;
    return number;
}

float calcSumFromUser()
{
    float sum = 0;
    float x = 0;
    int counter = 0;

    do
    {
        sum += x;
        x = readNumber("Enter Number " + to_string(++counter) + " Or " + to_string(-99) + " To Exit: ");

    } while (x != -99);

    return sum;
}

void PrintSumFromUser()
{
    float sum = calcSumFromUser();
    cout << "The Sum Is: " << sum;
}

int main()
{
    PrintSumFromUser();
}

/*
Write a program to read numbers from user and sum them, keep reading until the user enters -99 then print
the Sum on screen.
Input
10
20
30
40
-99
Outputs
100
*/