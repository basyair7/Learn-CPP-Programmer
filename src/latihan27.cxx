/**
 * @file latihan27.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details References : Returning References
 */

#include <iostream>
using namespace std;

char &replace(int i); // return a reference
char s[80] = "Hello There";

int main() {
    cout << __FILE__ << '\n';

    replace(5) = 'X';

    cout << s << '\n';

    return 0;
}

char &replace(int i) {
    return s[i];
}