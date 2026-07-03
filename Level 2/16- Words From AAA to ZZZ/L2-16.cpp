#include <iostream>
#include "../../myLib.h"
using namespace std;

void printLetters()
{
    cout << endl;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        for (char j = 'A'; j <= 'Z'; j++)
        {
            for (char k = 'A'; k <= 'Z'; k++)
            {
                cout << i << j << k;
                cout << "\n";
            }
        }
    }
    cout << endl;
}

int main()
{
    printLetters();
}