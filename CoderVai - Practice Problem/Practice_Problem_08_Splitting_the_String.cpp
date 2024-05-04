// 3 Apr 2024

// Practice Problem 01: Splitting the String
// Problem

// Editorial

// Submissions

// you will be given a String s, which can contain lowercase english letters ('a'- 'z'), spaces and commas(',') and a delimiter d.

// You have to print the splitted string, writing each new word in a new line.

// Suppose you have a string s = "i love cats,dogs", and d = ',' . Now you have to output the splitted strings. like this,

// i love cats

// dogs

// Input

// The first line of the input contains a the string s.

// and the second line contains a character d.

// Output

// print all splitted string on a new line

// Example

// Input

// i have cats,dogs,,kitten

// ,

// Output

// i have cats

// dogs

// kitten


#include <bits/stdc++.h>
using namespace std;

void split(const string str, int size, char delimiter)
{
    for (int i = 0; i < size; i++)
    {
        if (str[i] == delimiter)
        {
            cout << endl;
            continue;
        }
        cout << str[i];
    }
}

int main()
{
    string s, dm;
    getline(cin, s);
    getline(cin, dm);
    char d = dm[0];

    // int size = s.length();
    // char str[size + 1];
    // s.copy(str, size);

    int size = s.length();
    split(s, size, d);
}
