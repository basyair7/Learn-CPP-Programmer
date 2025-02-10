/**
 * @file latihan39_1.cxx
 * @brief Function Overloading, Copy Constructors,
 *        and Default Arguments
 * @details Default Function Arguments
 */

#include <iostream>
using namespace std;

/**
 * Default indent to -1. This value tells the function
 * to reuse the previous value.
 */
void iputs(char *str, int indent = -1);

int main() {
    cout << __FILE__ << '\n';

    iputs("Hello there", 10);
    iputs("This will be indented 10 spaces by default");
    iputs("This will be indented 5 spaces", 5);
    iputs("This is not indented", 0);

    return 0;
}

void iputs(char *str, int indent) {
    static int i = 0; // hols previous indent value
    if (indent >= 0)
        i = indent;
    else // reuse old indent value
        indent = i;

    for ( ; indent; indent--) cout << " ";

    cout << str << "\n";
}