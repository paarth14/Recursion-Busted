// Exponent of base and power of a number.

// Base Case: n^0 = 1

#include <bits/stdc++.h>
using namespace std;

int getExp(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    return a * getExp(a, b - 1);
}

int main()
{
    int base, power;

    cout << "Enter Base: " << endl;
    cin >> base;

    cout << "Enter Power: " << endl;
    cin >> power;

    cout << base << " to the power of " << power << " is -> " << getExp(base, power) << endl;
}