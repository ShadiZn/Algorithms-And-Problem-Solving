#include <iostream>
#include <string>
using namespace std;

void printName(string name)
{
    cout << "Welcome " << name << endl;
}

string enterName()
{
    string name;
    cout << "Enter Your Name: ";
    getline(cin, name);
    return name;
}

int main()
{
    string name = enterName();

    printName(name);
}

/*
Write a program to print your name on screen.
*/

/*
Write a program to ask the use to enter his/her name and
print it on screen.
*/