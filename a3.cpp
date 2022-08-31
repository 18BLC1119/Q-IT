#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Taking required inputs from the user and storing them
    cout << "Enter a, b, c, d, e, f: ";
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    // Generating the required output
    if (a * d - b * c == 0)
    {
        cout << "The equation has no solution";
    }
    else
    {
        double x = (e * d - b * f) / (a * d - b * c);
        double y = (a * f - e * c) / (a * d - b * c);
        cout << "x is " << x << " and y is " << y << endl;
    }
    return 0;
}
