#include <iostream>
using namespace std;

int readArrayLength()
{
    int n;
    do
    {
        cout << "Enter The Number Of Elements: ";
        cin >> n;
    } while (n < 1);
    return n;
}

void readNumbers(float nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> nums[i];
    }
}

float calcSum(float nums[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += nums[i];
    return sum;
}

float calcAverage(float nums[], int n)
{
    return calcSum(nums, n) / n;
}

void printSum(float nums[], int n)
{

    cout << "The sum is: " << calcSum(nums, n) << endl;
}

void printAverage(float nums[], int n)
{

    cout << "The Average is: " << calcAverage(nums, n) << endl;
}

int main()
{
    int n = readArrayLength();
    float nums[n];

    readNumbers(nums, n);

    printSum(nums, n);
    printAverage(nums, n);

    return 0;
}