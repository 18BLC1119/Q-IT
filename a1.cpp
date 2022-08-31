/*
a. A senior engineer is paid $2500 a week, and a junior engineer, $1250 a week. Write a C++ program that
accepts as input an engineer’s status in the character variable status. If status equals S, the senior
engineer’s salary should be displayed; otherwise, the junior engineer’s salary should be displayed.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Taking required input from the user
    cout << "Enter S for senior enginner's salary and other than S for junior engineer's salary: ";
    char userInput;
    cin >> userInput;
    if (userInput == 'S')
    {
        cout << "A senior engineer is paid $2500 a week.";
    }
    else
    {
        cout << "A junior engineer is paid $1250 a week.";
    }
    return 0;
}