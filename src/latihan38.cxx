/**
 * @file latihan38.cxx
 * @brief Function Overloading, Copy Constructors,
 *        and Default Arguments
 * @details Finding the Address of an Overloaded Function
 */

#include <iostream>
using namespace std;

int myfunc(int a);
int myfunc(int a, int b);

int main() {
    cout << __FILE__ << '\n';

    int (*fp1)(int a); // pointer to int f(int)
    int (*fp2)(int a, int b);

    fp1 = myfunc; // points to myfunc(int a)
    fp2 = myfunc; // points to myfunc(int a, int b)

    cout << fp1(5) << endl;
    cout << fp2(5, 6) << endl;

    return EXIT_SUCCESS;
}

int myfunc(int a) {
    return a;
}

int myfunc(int a, int b) {
    return a * b;
}