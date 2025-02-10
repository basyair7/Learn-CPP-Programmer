/**
 * @file latihan40.cxx
 * @brief Function Overloading, Copy Constructors,
 *        and Default Arguments
 * @details Function Overloading and Ambiguity
 */

#include <iostream>
using namespace std;

float myfunc(float i);
double myfunc(double i);

int main() {
    cout << __FILE__ << '\n';

    cout << myfunc(10, 1) << " "; // unambiguous, calls myfunc(double)
    cout << myfunc(10); // ambiguous

    return 0;
}

float myfunc(float i) {
    return i;
}

double myfunc(double i) {
    return -i;
}