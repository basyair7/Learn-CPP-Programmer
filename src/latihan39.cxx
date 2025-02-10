/**
 * @file latihan39.cxx
 * @brief Function Overloading, Copy Constructors,
 *        and Default Arguments
 * @details Default Function Arguments
 */

/**
 * void myfunc(double d = 0.0) {
 *      // ....
 * }
 */

#include <iostream>
using namespace std;

void clrscr(int size=25);

int main() {
    cout << __FILE__ << '\n';

    register int i;

    for (i = 0; i < 30; i++)
        cout << i << endl;
    cin.get();
    clrscr(); // clears 25 lines

    for (i = 0; i < 30; i++)
        cout << i << endl;
    cin.get();
    clrscr(10); // clears 10 lines

    return 0;
}

void clrscr(int size) {
    for (; size; size--)
        cout << endl;
}