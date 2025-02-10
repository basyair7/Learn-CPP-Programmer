/**
 * @file latihan34.cxx
 * @brief Function Overloading, Copy Constructors,
 *        and Default Arguments
 * @details Function Overloading
 */

#include <iostream>
using namespace std;

int myfunc(int i); // these differ in types of parameters
int myfunc(int i, int j);
double myfunc(double i);

int main() {
    cout << __FILE__ << '\n';

    cout << myfunc(10) << " ";  // callls myfunc(int i)
    cout << myfunc(4, 5) << " "; // calls myfunc(int i, int j)
    cout << myfunc(5.4) << endl; // calls myfunc(double 1)

    return 0;
}

double myfunc(double i) {
    return i;
}

int myfunc(int i) {
    return i;
}

int myfunc(int i, int j) {
    return i*j;
}