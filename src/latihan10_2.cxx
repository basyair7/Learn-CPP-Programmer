/**
 * @file latihan10_2.cxx
 * @brief Classes and Objects
 * @details Defining Inline Functions Within a Class
 */

#include <iostream>
using namespace std;

class myclass {
    int a, b;
public:
    // automatic inline
    void init(int i, int j) {
        a = i;
        b = j;
    }

    void show() {
        cout << a << " " << b << "\n";
    }
};

int main() {
    printf("%s\n", __FILE__);

    myclass x;

    x.init(10, 20);
    x.show();

    return 0;
}