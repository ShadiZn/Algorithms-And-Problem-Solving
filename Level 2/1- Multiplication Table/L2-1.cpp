#include <iostream>
using namespace std;

void printTableTitle(string msg)
{
    cout << "\n\n\t\t\t " << msg << endl;
}

void printTableHeader()
{
    cout << "\t";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n___________________________________________________________________________________\n";
}

string columnSeparator(int i)
{
    if (i < 10)
        return "   |";
    else
        return "  |";
}

void printMultiRow(int number)
{
    for (int i = 1; i <= 10; i++)
    {

        cout << i * number << "\t";
    }
}

void printMultiTable(int from, int to)
{

    if (from > to)
        swap(from, to);

    printTableTitle("Multiplication Table From " + to_string(from) + " to " + to_string(to) + "\n");

    printTableHeader();

    for (int i = from; i <= to; i++)
    {
        cout << ' ' << i << columnSeparator(i) << "\t";
        printMultiRow(i);
        cout << endl;
    }
}

int main()
{
    printMultiTable(3, 5);
}