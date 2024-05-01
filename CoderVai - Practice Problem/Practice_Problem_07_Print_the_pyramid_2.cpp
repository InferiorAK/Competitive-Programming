// 1 May 2024

// Practice Problem 02 - Print the pyramid 2
// Problem

// Editorial

// Submissions

// The task is to print a square of the following format.

// *---*
// |   |
// |   |
// |   |
// *---*
// This is the square for N = 5.

// Input

// The number of lines or the length of side of the pyramid, N.

// 3 <= N <= 102

// Output

// Print a square of the mentioned format.

// Example

// Input

// 10

// Output

// *--------*
// |        |
// |        |
// |        |
// |        |
// |        |
// |        |
// |        |
// |        |
// *--------*

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (3 <= N and N <= 1e2)
    {
        for (int line = 1; line <= N; line++)
        {
            if (line == 1 or line == N)
            {
                cout << "*";
                for (int minus = 2; minus <= N - 1; minus++)
                {
                    cout << "-";
                }
                cout << "*";
                cout << endl;
            }
            if (2 <= line and line <= N - 1)
            {
                cout << "|";
                for (int i = 2; i <= N - 1; i++)
                {
                    cout << " ";
                }
                cout << "|\n";
            }
        }
    }
}