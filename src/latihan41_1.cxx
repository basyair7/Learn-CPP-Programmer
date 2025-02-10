/**
 * @file latihan41_1.cxx
 * @brief Operator Overloading
 * @details Creating a Member Operator Function
 */

#include <iostream>
using namespace std;

class loc {
    int longtitude, latitude;
public:
    loc() {} // needed to construct temporaries
    loc(int lg, int lt) {
        this->longtitude = lg;
        this->latitude   = lt;
    }

    void show() {
        cout << this->longtitude << " ";
        cout << this->latitude << "\n";
    }

    loc operator+(loc op2);
    loc operator-(loc op2);
    loc operator=(loc op2);
    loc operator++();
};

// Overload + for loc.
loc loc::operator+(loc op2) {
    loc temp;
    temp.longtitude = op2.longtitude + this->longtitude;
    temp.latitude = op2.latitude + this->latitude;

    return temp;
}

// Overload - for loc.
loc loc::operator-(loc op2) {
    loc temp;
    temp.longtitude = op2.longtitude + this->longtitude;
    temp.latitude = op2.latitude + this->latitude;

    return temp;
}

// Overload asignment of loc.
loc loc::operator=(loc op2) {
    this->longtitude = op2.longtitude;
    this->latitude = op2.latitude;

    return *this; // i.e., return object that generated call
}

// Overload prefix ++ for loc.
loc loc::operator++() {
    this->longtitude++;
    this->latitude++;

    return *this;
}

int main(void) {
    cout << __FILE__ << '\n';

    loc ob1(10, 20), ob2(5, 30), ob3(90, 90);

    cout << "ob1: ";
    ob1.show();
    cout << "ob2: ";
    ob2.show();

    ++ob1;
    cout << "ob1: ";
    ob1.show(); // display 11 21

    ob2 = ++ob1;
    cout << "ob1: ";
    ob1.show(); // display 12 22
    cout << "ob2: ";
    ob2.show(); // display 12 22

    ob1 = ob2 = ob3; // multiple assignment
    cout << "ob1: ";
    ob1.show(); // displays 90 90
    cout << "ob2: ";
    ob2.show(); // displays 90 90

    return 0;
}