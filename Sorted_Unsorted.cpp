// Check Whether the array is - Sorted or Unsorted.

// Concept:
//{1,2,5,7,9} --> Sorted
//{1,3,4,2,11} --> Unsorted

// Base Condition:
// 1) Traverse Entire Array.
// 2) If current_element < previous_element i.e (ith element < (i-1)th element).

#include <bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> arr, int index)
{
    // Base Condition 1
    if (index >= arr.size())
    {
        return true;
    }

    // Base Condition 2
    if (arr[index] < arr[index - 1])
    {
        return false;
    }

    return checkSorted(arr, index + 1);
}

int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element: " << endl;
        cin >> arr[i];
    }

    bool answer = checkSorted(arr, 1);

    if (answer)
    {
        cout << "Array is Sorted!" << endl;
    }

    else
    {
        cout << "Array is Unsorted!" << endl;
    }

    return 0;
}