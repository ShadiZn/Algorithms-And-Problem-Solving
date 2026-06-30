#include <iostream>
using namespace std;

int enterPositiveNumber()
{
    int n;
    do
    {
        cout << "\nEnter Positive Number: ";
        cin >> n;
    } while (n <= 0);
    return n;
}

void printNumbersTo(int n)
{
    cout << "Print Numbers From 1 To " << n << ":" << endl;
    for (int i = 1; i <= n; i++)
        cout << i << endl;
}

void printNumbersFrom(int n)
{
    cout << "Print Numbers From " << n << " To 1:" << endl;
    for (int i = n; i > 0; i--)
        cout << i << endl;
}

int main()
{
    int n = enterPositiveNumber();
    printNumbersTo(n);
    printNumbersFrom(n);
}

/*   26
Write a program to print numbers from 1 to N.
Input
10
Outputs
1
2
3
4
5
6
7
8
9
10
*/
/*   27
Write a program to print numbers from N to 1
Input
10
Outputs
10
9
8
7
6
5
4
3
2
1
*/