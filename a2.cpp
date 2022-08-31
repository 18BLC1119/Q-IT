/*
A function is defined by the rule that  = if and  =  + +  if . Write a procedure that computes f by
means of a recursive process. Write a procedure that computes f by means of an iterative process .
*/
#include <bits/stdc++.h>
using namespace std;
// Procedure to calculate using recursive process
int f(int n)
{
    if (n < 3)
    {
        return n;
    }
    else
    {
        return f(n - 1) + 2 * f(n - 2) + 3 * f(n - 3);
    }
}
// Procedure to calculate using iterative process
int fi(int n)
{
    int a1 = 0;
    int a2 = 1;
    int a3 = 2;
    if (n < 3)
    {
        return n;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            int temp = a3 + 2 * a2 + 3 * a1;
            a1 = a2;
            a2 = a3;
            a3 = temp;
        }
    }
    return a3;
}
int main()
{
    int n;
    cout << "Please enter a required value for n: ";
    cin >> n;
    cout << "Using recursive f(" << n << ") = " << f(n) << endl;
    cout << "Using iterative f(" << n << ") = " << fi(n) << endl;
    return 0;
}