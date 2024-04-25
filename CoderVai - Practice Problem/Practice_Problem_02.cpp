// 23 Apr 2024

// Practice Problem 02 - Can you check numbers? (Easy version)
// Problem

// Editorial

// Submissions

// You will be given 2 numbers. Compare them and check who is greater or if they are equal.

// Input

// Given two integer numbers a, b.

// a, b <= 104

// Output

// If a is greater then print "First", if b is greater print "Second", else print "Equal".

// Example

// Input

// 9 2

// Output

// First

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "First";
    }
    else if (a < b)
    {
        cout << "Second";
    }
    else
    {
        cout << "Equal";
    }
}