// 19 May 2025

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string expr[n];

    for (int i = 0; i < n; i++){
        cin >> expr[i];
    }

    int x = 0;
    for (int i = 0; i < n; i++){
        string op = expr[i];
        if (op == "X++" || op == "++X") x++;
        else if (op == "X--" || op == "--X") x--;
    }
    
    cout << x << endl;
}