// Recursion - Fibonacci Series

// Concept: term_n = term_(n-1) + term_(n-2)

// Base Condition: if(n==0 || n==1) => return n;

#include <bits/stdc++.h>
using namespace std;

int get_fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return get_fibonacci(n - 1) + get_fibonacci(n - 2);
}

int main()
{
    int n;

    cout << "Enter a positive integer: " << endl;
    cin >> n;

    //     // Fib series -> 0,1,1,2,3,5,8,13,......
    //     // 0th fibonacci number is 0
    //     // 1st fibonacci number is 1
    //     // 2nd fibonacci number is 1
    //     // 3rd fibonacci number is 2 and so on

    cout << "Value of " << n << "th Fibonacci is: " << get_fibonacci(n) << endl;
}
