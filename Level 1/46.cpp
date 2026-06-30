#include <iostream>
using namespace std;

void printLetters(char from, char to)
{
    int i = (int)from;
    while (i <= (int)to)
    {
        cout << char(i) << endl;
        i++;
    }
}

int main()
{
    printLetters('A', 'Z');
}