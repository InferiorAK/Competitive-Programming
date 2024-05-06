// 5 May 2024

// Practice Problem 03: Checkig Valid IP addresses
// Problem

// Editorial

// Submissions

//                                                   Checkig Valid IP addresses

// A valid IP address consists of exactly four integers separated by single dots. Each integer is between 0 and 255 (inclusive) and cannot have leading zeros.

//         For example, "0.1.2.201" and "192.168.1.1" are valid IP addresses,

//         but "0.011.255.245", "192.168.1.312" and "192.1681.1" are invalid IP addresses.

// You will be given a string s and you need to check if the String s is a valid IP address or not.

// Input

// A string **S** that contains digits[0 - 9] and dots [.].

// Output

// output YES if its a valid IP address, otherwise print NO.

// Example

// Input

// 0.1.2.201

// Output

// YES

#include <bits/stdc++.h>
using namespace std;

bool Validate(const string &ipAddress)
{
    int dots = 0;
    int num = 0;

    for (char c : ipAddress)
    {
        if (c == '.')
        {
            // Check if a part is a number and within range [0, 255]
            if (dots >= 3 || num < 0 || num > 255)
            {
                return false;
            }
            num = 0; // Reset num for the next part
            dots++;  // Increment the number of dots encountered
        }
        else if (isdigit(c))
        {
            num = num * 10 + (c - '0'); // Convert characters to integers
        }
        else
        {
            return false; // Non-digit character encountered
        }
    }

    // Check if the last part is a number and within range [0, 255]
    if (dots != 3 || num < 0 || num > 255)
    {
        return false;
    }

    return true;
}

int main()
{
    string ipAddress;
    cin >> ipAddress;

    if (Validate(ipAddress))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
