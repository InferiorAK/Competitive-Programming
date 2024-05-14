// 14 May 2024

// Practice Problem 07: Magic Square
// Problem

// Editorial

// Submissions

// Given a 2 dimensional array, A. Check if it is a magic square or not.

// A magic square is a square whose sum of each row, sum of each column and sum of each diagonal are all equal to each other.

// For example:

// A = [[8, 1, 6],
// [3, 5, 7],
// [4, 9, 2]]
// Here, sum of each row is 15, sum of each column is 15 and sum of each diagonal is 15.

// The diagonals are {8, 5, 2} and {6, 5, 4}.

// Input

// The number of rows in the square, n.

// The numbers in the square A. 0 <= A[i] <= 100.

// Output

// Print "YES" if it is a magic square.

// Else print "NO".

// Example

// Input

// 3
// 8 1 6
// 3 5 7
// 4 9 2

// Output
// YES

#include <bits/stdc++.h>
using namespace std;

void done(int sum, int desired)
{
    if (sum != desired)
    {
        cout << "NO";
        exit(1);
    }
}

int main()
{
    int n, x;
    cin >> n;
    if (2 < n && n % 2 == 0)
    {
        cout << "NO";
        exit(1);
    }
    int A[n][n];

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> x;
            if (0 <= x && x <= 100)
            {
                A[row][col] = x;
            }
            else
            {
                cout << "NO" << endl;
                exit(1);
            }
        }
    }

    int desired = 0;
    for (int col = 0; col < n; col++)
    {
        desired += A[0][col];
    }

    int sum = 0;

    // Row
    for (int row = 1; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            sum += A[row][col];
        }
        done(sum, desired);
        sum = 0;
    }

    // Column
    for (int col = 0; col < n; col++)
    {
        for (int row = 0; row < n; row++)
        {
            sum += A[row][col];
        }
        done(sum, desired);
        sum = 0;
    }

    // 1st Diagonal
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == col)
            {
                sum += A[row][col];
            }
        }
    }
    done(sum, desired);
    sum = 0;

    // 2nd Diagonal
    for (int row = 0; row < n; row++)
    {
        int col = n - (row + 1);
        sum += A[row][col];
    }
    done(sum, desired);
    sum = 0;

    cout << "YES";
}