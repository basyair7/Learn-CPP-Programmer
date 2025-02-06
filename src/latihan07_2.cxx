/**
 * @file latihan07_2.cxx
 * @brief Classes and Objects
 * @details Unions and Classes Are Related
 */

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    printf("%s\n", __FILE__);
	
    // define anonymous union
    union {
        long l;
        double d;
        char s[4];
    };

    // now, reference union elements directly
    l = 100000;
    cout << l << " ";
    d = 123.2342;
    cout << d << " ";
    strcpy(s, "hi");
    cout << s << endl;

    return 0;
}
