// Solved: 23 Apr 2024

// Practice Problem 01 - Hello Competitive Programming
// Problem

// Editorial

// Submissions

// Your task is very simple here. You will be given 2 integer numbers and an operator ('+' / '-' / '*') as an input. You have to print the result.

// Input

// The only line of input will be two integers a, b and an operator ch ('+', '*', '-').

// 1 <= a, b <= 10000

// ch ∈ [ '+', '-', '*' ]

// Output

// Print the result.

// Example

// Input

// 4 10 +

// Output

// 14

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char c;
    cin >> a >> b >> c;
    if (1 <= a and b <= 10000)
    {
        // if (c == '+')
        // {
        //     cout << a + b;
        // }
        // else if (c == '*')
        // {
        //     cout << a * b;
        // }
        // else if (c == '-')
        // {
        //     cout << a - b;
        // }

        switch (c)
        {
        case ('+'):
            cout << a + b;
        case ('*'):
            cout << a * b;
        case ('-'):
            cout << a - b;
        default:
            break;
        }
    }
}