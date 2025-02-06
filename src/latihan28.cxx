/**
 * @file latihan28.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details References : Independent References
 */

#include <iostream>
using namespace std;

int main() {
    cout << __FILE__ << '\n';

    int a;
    int &ref = a; // independent reference

    /*
     int& p; // & associated with type
     int &p; // & associated with variable
    */

    a = 10;
    cout << a << " " << ref << '\n';

    ref = 100;
    cout << a << " " << ref << '\n';

    int b = 19;
    ref = b; // this puts b's value to a
    cout << a << " " << ref << '\n';

    ref--; // this decrements a
           // it does not affect what ref refers to

    cout << a << " " << ref << '\n';

    return 0;
}