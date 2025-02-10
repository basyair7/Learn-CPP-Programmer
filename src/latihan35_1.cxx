/**
 * @file latihan35_1.cxx
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
    
    char s[80];
    cout << "Enter new date: ";
    cin >> s;

    date d(s);
    d.show_date();

    return 0;
}