/**
 * @file latihan14_1.cxx
 * @brief Classes and Objects
 * @details Statics Class Members : Static Member Functions
 */
 
#include <iostream>
using namespace std;

class static_type {
	static int i;
public:
	static void init(int x) { i = x; }
	void show() { cout << i << endl; }
};

int static_type::i; // define i

int main() {
	printf("%s\n", __FILE__);
	
	// init static data before object creation
	static_type::init(100);
	
	static_type x;
	x.show(); // display 100
	
	return 0;
}