// 30 Apr 2024

// Alex is a business man in Wonderland . He is recently worried about his taxes.

// The tax system of Wonderland is as follows. The tax system has 3 tiers.

//   Income <= 50000, the tax rate is 10%
//   50000 < Income <= 100000, the tax rate is 20%
//   Income > 100000, the tax rate is 30%
// For example, let's say Alex earns $75000.

// * On the first $50000, 10% tax rate will be applied.

// * On the remaining $25000, 20% tax rate will be applied.

// So, total tax = 10% * 50000 + 20% * 25000 = 10000

// Alex wants you to write a program to calculate his taxes. It is guaranteed that the payable tax will be an integer.

// Input

// A positive integer, n, indicates the income of Alex.

// Alex's income is always a multiple of 10.

// 1 <= n <= 109

// Output

// Output the total payable tax of Alex.

// Example

// Input

// 75000

// Output

// 10000

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tax;
    // cout << "Input Income: ";
    cin >> n;

    tax = 0;

    if (1 <= n and n <= 1e9 and n % 10 == 0)
    {
        if (n <= 50000)
        {
            tax += n * 10 / 100;
        }
        else if (50000 < n and n <= 100000)
        {
            tax += 50000 * 10 / 100 + (n - 50000) * 20 / 100;
        }
        else if (n > 100000)
        {
            tax += 50000 * 10 / 100 + (100000 - 50000) * 20 / 100 + (n - 100000) * 30 / 100;
        }
    }

    if (tax != 0)
    {
        cout << tax;
    }
}