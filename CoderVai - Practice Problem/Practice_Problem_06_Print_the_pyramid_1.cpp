// 1 May 2024

// Practice Problem 01 - Print the pyramid 1
// Problem

// Editorial

// Submissions

// The task is to print a triangle of the following format.

//          *

//         *.*

//        *.*.*

//       *.*.*.*

//      *.*.*.*.*

// This is the triangle for N = 5.

// Input

// The number of lines or the height of the pyramid, N.

// 1 <= N <= 102

// Output

// Print a Pyramid of the mentioned format.

// Example

// Input

// 6

// Output

//      *
//     *.*
//    *.*.*
//   *.*.*.*
//  *.*.*.*.*
// *.*.*.*.*.*

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (1 <= N and N <= 1e2)
    {
        for (int line = 1; line <= N; line++)
        {
            for (int j = 1; j <= (N - line); j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= 2 * line - 1; j++)
            {
                if (j % 2 == 0)
                {
                    cout << ".";
                }
                else
                {
                    cout << "*";
                }
            }
            cout << endl;
        }
    }
}