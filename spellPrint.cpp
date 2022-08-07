// Recursion: Printing Spelling

// Problem Statement:-

// To Print like:-
// Input : 12 = One Two
// Input : 23 = Two Three
// Input : 431 = Four Three One

#include <bits/stdc++.h>
using namespace std;

void printSpell(int n, string str[])
{
    // Base Condition
    if (n == 0)
    {
        return;
    }

    printSpell(n / 10, str);
    cout << str[n % 10] << " ";
}

int main()
{
    int n;
    cout << "Enter a positive integer: " << endl;
    cin >> n;

    string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // cout << "Answer is: " << printSpell(n, str);

    cout << "Answer is: ";
    printSpell(n, str);

    return 0;
}