// 7 May 2024

// Practice Problem 04: Checking Anagrams
// Problem

// Editorial

// Submissions

// Given two strings s and t, Print yes if t is an anagram of s, and no otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// Input

// Two strings **s** and **t** containing only lowercase latin letters ['a' - 'z'].

// Output

// Output "yes" or "no" according to the condition stated above.

// Example

// Input

// kamil

// limak

// Output

// yes

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    // Convert both strings to lowercase
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);

    // Sort both strings
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}