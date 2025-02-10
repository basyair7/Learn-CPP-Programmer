/**
 * @file latihan41.cxx
 * @brief Operator Overloading
 * @details Creating a Member Operator Function
 */

/*
    ret-type class-name::operator#(arg-list) {
        // operations
    }
*/

#include <iostream>
using namespace std;

class loc {
    int longitude, latitude;
public:
    loc() {}
    loc(int lg, int lt) {
        this->longitude = lg;
        this->latitude = lt;
    }

    void show() {
        cout << this->longitude << " ";
        cout << this->latitude << '\n';
    }

    loc operator+(loc op2);
};

// OVerload + for loc.
loc loc::operator+(loc op2) {
    loc temp;

    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;

    return temp;
}

int main() {
    cout << __FILE__ << '\n';
    
    loc ob1(10, 20), ob2(5, 30);

    ob1.show(); // display 10 20
    ob2.show(); // display 5 30

    ob1 = ob1 + ob2;
    ob1.show(); // display 15 50

    return 0;
}