// 15 May 2024

// Practice Problem 08: Matrix Product
// Problem

// Editorial

// Submissions

// Given two square matrices of dimension n * n .

// Find the product of the two matrix.

// Input

// The number of rows in the matrix, n .

// The first matrix, A. 0 <= A[ i ][ j ] <= 100

// The second matrix, B. 0 <= B[ i ][ j ] <= 100.

// Output

// Print the product of the two matrices.

// Example

// Input
// 3

// 1 4 5
// 2 1 3
// 3 5 6

// 2 3 4
// 5 7 9
// 1 4 7

// Output
// 27 51 75
// 12 25 38
// 37 68 99

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Declare matrices
    int A[n][n];
    int B[n][n];
    int product[n][n]; // Declare the product matrix

    for (int row = 0; row < n; row++)
    {
        int x;
        for (int col = 0; col < n; col++)
        {
            cin >> x;

            A[row][col] = x;
        }
    }
    for (int row = 0; row < n; row++)
    {
        int y;
        for (int col = 0; col < n; col++)
        {
            cin >> y;
            B[row][col] = y;
        }
    }

    // Initialize the product matrix to zero
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            product[i][j] = 0;
        }
    }

    // Compute the matrix product
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            for (int k = 0; k < n; k++)
            {
                product[row][col] += A[row][k] * B[k][col];
            }
        }
    }

    // Output the product matrix
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << product[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
