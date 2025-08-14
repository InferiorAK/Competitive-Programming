// 25 Apr 2024

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x != 2 and 1 <= x and x <= 100)
    {
        if (x % 2 == 0) cout << "YES";
        else cout << "NO";
    }
    else cout << "NO";

}