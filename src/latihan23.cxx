/**
 * @file latihan23.cxx
 * @brief Arrays, Pointers, References, 
 *        and the Dynamic Allocation Operations
 * @details Pointers to Derived Types
 */

#include <iostream>
using namespace std;

class base {
    int i;
public:
    void set_i(int num) { this->i = num; }
    int get_i() { return this->i; }
};

class derived : public base {
    int j;
public:
    void set_j(int num) { this->j = num; }
    int get_j() { return this->j; }
};

int main() {
    printf("%s\n", __FILE__);

    base *bp;
    derived d;

    bp = &d; // base pointer points to derived object

    // access derived object using base pointer
    bp->set_i(10);
    cout << bp->get_i() << "\n";

    /* The following won't work. You can't access element of
     * a derived class using a base classes pointer.
     
     bp->set_j(88); // error
     cout << bp->get_j(); // error
     
    */
    
    // access now allowed because of cast
    ((derived *)bp)->set_j(88);
    cout << ((derived *)bp)->get_j() << endl;

    return 0;
}