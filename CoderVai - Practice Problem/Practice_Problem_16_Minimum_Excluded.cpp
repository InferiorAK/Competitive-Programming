// 15 May 2024

// Practice Problem 09: Minimum Excluded
// Problem

// Editorial

// Submissions

// Given an array of integers, find the minimum positive integer that is not present in the array. The integers in the array are guaranteed to be between 1 and 1000 (inclusive).

// For example, if the array is [1, 3, 6, 4, 1, 2], then the minimum positive integer that is not present in the array is 5.

// This is also known as MEX of the Array

// Input

// The first line of the input contains an integer n (1 <= n <= 1000), the size of the array.

// The second line of the input contains n space-separated integers a[ i ] (1 <= a[ i ] <= 1000), the elements of the array.

// Output

// Output a single integer, the minimum positive integer that is not present in the array.

// Example

// Input
// 6
// 1 4 1 2 3 6

// Output
// 5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    sort(arr, arr + n);
    int min_ex = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min_ex)
        {
            min_ex++;
            // cout << arr[i] << " " << mex << endl;
        }
    }
    cout << min_ex;
    return 0;
}
