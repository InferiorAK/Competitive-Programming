#include <bits/stdc++.h>
using namespace std;

// *-------------------------------------------------------*-------------------------------------------------------*

//         // Question-01 : What will be the values of x and y after executing this code ?

//         // int x = 5;
//         // int y = x++;
//         // cout << "x: " << x << ", y: " << y << endl;

//         // See The Differebce! HaHaHa!

// int pre_and_post_increment()
// {

//     int x = 5;
//     int y = x++;
//     cout << "x: " << x << ", y: " << y << endl;

//     x = 5;
//     y = ++x;
//     cout << "x: " << x << ", y: " << y << endl;
// }

// int main()
// {
//     pre_and_post_increment();
// }

// *-------------------------------------------------------*-------------------------------------------------------*

//         // Questuin-02 : What is the output of this code?

//         // #include <iostream>

//         // void changeValue(int x) {
//         //     x = 10;
//         // }

//         // int main() {
//         //     int num = 5;
//         //     changeValue(num);
//         //     std::cout << num << std::endl;
//         //     return 0;
//         // }
//         // a) 10
//         // b) 5 (Ans)
//         // c) Error
//         // d) 0

// // The reason for this is that the function changeValue takes an integer parameter x by value, which means it works with
// // a copy of the original num variable. Inside the function, x is assigned the value of 10, but this change doesn't affect
// // the original num variable declared in the main() function. So, when you print num in the main() function after calling
// // changeValue(), it still retains its original value, which is 5. But if we call by "Reference", then It will change the
// // Original Value of num Variable.

// #include <iostream>

// void changeValue(int &x)
// {
//     x = 10;
// }

// int main()
// {
//     int num = 5;
//     changeValue(num);
//     std::cout << num << std::endl;
//     return 0;
// }

// // It Will give output: 10

// *-------------------------------------------------------*-------------------------------------------------------*

//         // Question-03 : What is the output of this code?

// #include <iostream>
// int main() {
//     int arr[5] = {11, 22, 33, 44, 55};
//     int* ptr = arr;
//     std::cout << *ptr << std::endl;
//     return 0;
// }
// a) 11
// b) 55
// c) Error
// d) Garbage value

// Ans: 11
// It will give the 1st value of the array. Because, ptr is pointing to the 1st element of the array.

// *-------------------------------------------------------*-------------------------------------------------------*

//         // Question-04 : What is the range of index values of the following array?

//             int arr[1000];
//             (a) 1 to 1000
//             (b) 1 to 999
//             (c) 0 to 999
//             (d) 0 to 1000
//          Answer:
//         (c) 0 to 999

// Explanation: 

// If the size of an array is n , then the valid index range of the array is 0 to n-1 .


// *-------------------------------------------------------*-------------------------------------------------------*


//          // Question-05 : What is the output of this code?

            // #include <iostream>

            // void modifyArray(int arr[]) {
            //     arr[1] = 10;
            // }

            // int main() {
            //     int arr[3] = {1, 2, 3};
            //     modifyArray(arr);
            //     std::cout << arr[1] << std::endl;
            //     return 0;
            // }

            // a) 1
            // b) 10
            // c) 2
            // d) Error

            // Answer:
            // b) 10

// Explanation: 
// The function modifyArray modifies the array arr passed to it, changing arr[1] to 10.

// In C++, when you pass an array to a function, you are actually passing a pointer to the first element of the array. This means you are passing a reference to the array's data in memory, not a copy of the entire array.

// So, when you modify the elements of the array inside the function, those changes are reflected in the original array in the calling function. This behavior is often referred to as "passing by reference" for arrays because you are working directly with the original data in memory.

// *-------------------------------------------------------*-------------------------------------------------------*    

