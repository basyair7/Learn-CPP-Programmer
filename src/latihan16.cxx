/**
 * @file latihan16.cxx
 * @brief Classes and Objects
 * @details Local Classes
 */

#include <iostream>
using namespace std;

void f();

int main() {
    printf("%s\n", __FILE__);

    f();
    // myclass not know here
    return 0;
}

void f() {
    class myclass {
        int i;
    public:
        void put_i(int n) { i = n; }
        int get_i() { return i; }
    } ob;

    ob.put_i(10);
    cout << ob.get_i() << endl;
}