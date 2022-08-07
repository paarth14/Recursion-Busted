// Recursion - Factorial

// Concept: f(n)! = n * f(n-1)!
// Eg: 8! = 8 * 7!
// Base Condition: 1! = 1

#include <bits/stdc++.h>
using namespace std;

int get_factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * get_factorial(n - 1);
}

int main()
{
    int n;
    // unsigned long long fact = 1;

    cout << "Enter a positive integer: " << endl;
    cin >> n;

    cout << "Value of " << n << "! is: " << get_factorial(n) << endl;
}
