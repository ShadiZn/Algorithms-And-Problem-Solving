#include <iostream>
using namespace std;

int readNumberOfElements()
{
    int n;
    do
    {
        cout << "Enter The Number Of Elements You Want: ";
        cin >> n;
    } while (n < 1);
    return n;
}

void readElements(float nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> nums[i];
    }
}

float findMax(float nums[], int n)
{
    float max = nums[0];

    for (int i = 1; i < n; i++)
        if (nums[i] > max)
            max = nums[i];

    return max;
}

void printMax(float nums[], int n)
{
    cout << "The Maximum Number Is: " << findMax(nums, n) << endl;
}

int main()
{
    int n = readNumberOfElements();
    float nums[n];
    readElements(nums, n);
    printMax(nums, n);
}

/*
Write a program to ask the user to enter:
• Number1 , Number2
Then Print the Max Number
Example Inputs:
10
20
Outputs
20

Write a program to ask the user to enter 3 numbers:
• A
• B
• C
Then Print Max number.
Example Inputs:
30
10
20
Outputs
30

*/