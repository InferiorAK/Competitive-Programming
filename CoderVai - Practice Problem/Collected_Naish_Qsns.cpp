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
