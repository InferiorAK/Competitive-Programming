// 14 May 2024

// Practice Problem 06: Frequency Count
// Problem

// Editorial

// Submissions

// Given an array, A, find the frequency of each of its items.

// For example,

// A = [2, 3, 2, 1, 3, 4, 5, 9, 12]

// Here, 2 and 3 occurs 2 times. Rest of the numbers occur only once.

// Input

// The size of the array, n . 1 <= n <= 100000.

// The items of the array, A[i] , 0 <= A[i] <= 100.

// Output

// Print each number (ascending order) and its frequency seperated by space in a new line.

// Example

// Input

// 9
// 2 3 2 1 3 4 5 9 12

// Output

// 1 1
// 2 2
// 3 2
// 4 1
// 5 1
// 9 1
// 12 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int A[n];

    if (1 <= n && n <= 1e5)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (0 <= x && x <= 100)
            {
                A[i] = x;
            }
            else
            {
                exit(1);
            }
        }
        sort(A, A + n);
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            if (A[i] == A[i + 1])
            {
                count++;
            }
            else
            {
                cout << A[i] << " " << count << endl;
                count = 1;
            }
        }
    }
}
