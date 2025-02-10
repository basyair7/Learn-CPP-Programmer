/**
 * @file latihan35.cxx
 * @brief Function Overloading, Copy Constructors,
 *        and Default Arguments
 * @details Overloading Constructors : 
 *          Overloading a Constructor to Gain Flexibility
 */

#include <iostream>
#include <cstdio>
using namespace std;

class date {
    int day, month, year;
public:
    date(char *d);
    date(int m, int d, int y);
    void show_date();
};

// Initialize using string.
date::date(char *d) {
    sscanf(d, "%d%*c%d%*c%d", &month, &day, &year);
}

// Initialize using integers.
date::date(int m, int d, int y) {
    this->day = d;
    this->month = m;
    this->year = y;
}

void date::show_date() {
    cout << this->month << "/" << this->day;
    cout << "/" << this->year << "\n";
}

int main() {
    cout << __FILE__ << '\n';

    date ob1(12, 4, 2003), ob2("10/22/2023");

    ob1.show_date();
    ob2.show_date();

    return 0;
}