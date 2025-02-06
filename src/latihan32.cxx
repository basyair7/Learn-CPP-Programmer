/**
 * @file latihan32.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details C++'s Dynamic Allocation Operators : 
 *          Allocating Objects
 */

#include <iostream>
#include <new>
#include <cstring>
using namespace std;

class balance {
    double cur_bal;
    char name[80];
public:
    void set(double n, char *s) {
        this->cur_bal = n;
        strcpy(this->name, s);
    }

    void get_bal(double &n, char *s) {
        n = this->cur_bal;
        strcpy(s, this->name);
    }
};

int main(void) {
    cout << __FILE__ << '\n';

    balance *p;
    char s[80];
    double n;

    try {
        p = new balance;
    } catch(bad_alloc& xa) {
        cout << "Allocation Failure\n";
        cerr << xa.what() << '\n';
        return 1;
    }

    p->set(12387.87, "Ralph Wilson");

    p->get_bal(n, s);

    cout << s << "'s balance is: " << n;
    cout << '\n';

    delete p;
    return 0;
}