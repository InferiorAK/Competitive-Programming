// 25 Apr 2024

// Practice Problem 03 - Can you check numbers? (Hard version)
// Problem

// Editorial

// Submissions

// You will be given a list of 'n' numbers. Can you tell when you received the maximum number? If you receive the maximum number multiple times, you have to output the earliest one.

// Specifically you only need to output the index of the maximum number. Here index means 1 based ordering. Suppose I give you 3 numbers 5, 1, 6. Here if we consider 1 based indexing

// then 5 has an index 1, 1 has an index 2 and 6 has an index 3.

// Input

// You will be given an integer n, the size of the input list. Then you will receive n numbers.

// n <= 103

// each number <= 103

// Output

// Tell the index of the maximum number, as stated above.

// Example

// Input

// 5

// 1 2 3 4 5

// Output

// 5

#include <bits/stdc++.h>
using namespace std;

int max_index(int arr[], int size)
{
    int max_index = 0;
    int max_val = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] > max_val)
        {
            max_val = arr[j];
            max_index = j;
        }
    }
    return max_index;
}

int main()
{
    int n, a;
    cin >> n;
    int array[n];
    if (n <= 1000)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a <= 1000)
            {
                array[i] = a;
            }
            else
            {
                exit(1);
            }
        }
    }

    cout << max_index(array, n) + 1;
}
