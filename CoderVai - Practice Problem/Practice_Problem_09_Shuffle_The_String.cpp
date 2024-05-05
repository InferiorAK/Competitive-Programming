// 6 Apr 2024

// Practice Problem 02: Shuffle The String
// Problem

// Editorial

// Submissions

// You are given a string s and an integer array indices of the same length. The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.

// print the shuffled string.

// Input

// The first line of input contains a string s

// The next line of the input contains an array indices, whose length is equal to the string's length. 1 <= indices[i] <= |s|

// It is guaranteed that indices array is a permutation of numbers from 1 to n. ie. all number in range from 1 to n occurs exactly once.

// Output

// Print the shuffled string

// Example

// Input

// love

// 4 2 1 3

// Output

// voel

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int size = s.length();
    string shuffled(size, '.');
    int arr[size + 1];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    for (int i = 0; i < size; i++)
    {
        shuffled[arr[i] - 1] = s[i];
    }
    cout << shuffled << endl;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);

//     int size = s.length();
//     int x, arr[size];
//     char shuffled[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//         if (!(1 <= arr[i] and arr[i] <= size))
//         {
//             exit(0);
//         }
//     }
//     for (int j = 0; j < size; j++)
//     {
//         shuffled[arr[j] - 1] = s[j];
//     }
//     for (int k = 0; k < size; k++)
//     {
//         cout << shuffled[k];
//     }
// }