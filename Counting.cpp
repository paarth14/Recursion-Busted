// Recursion - Counting Numbers

// Case 1: When we are doing recursive call before and printing numbers afterwards, then --> 1, 2, 3, 4, 5.
#include <bits/stdc++.h>
using namespace std;

void getCounting(int n)
{
    if (n <= 0)
    {
        return;
    }

    getCounting(n - 1); // Recursive Call

    cout << n << endl;
}

int main()
{
    int n;
    cout << "Please enter the input: " << endl;
    cin >> n;

    cout << "Counting: " << endl;
    getCounting(n);
}

// Case 2: When we are doing recursive call after and printing numbers before, then --> 5, 4, 3, 2, 1.
// #include <bits/stdc++.h>
// using namespace std;

// void getCounting(int n)
// {
//     if (n <= 0)
//     {
//         return;
//     }

//     cout << n << endl;

//     getCounting(n - 1); // Recursive call
// }

// int main()
// {
//     int n;
//     cout << "Please enter the input: " << endl;
//     cin >> n;

//     cout << "Counting: " << endl;
//     getCounting(n);
// }
