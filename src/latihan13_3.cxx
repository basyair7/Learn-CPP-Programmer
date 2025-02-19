/**
 * @file latihan13_3.cxx
 * @brief Classes and Objects
 * @details Statics Class Members : Static Data Members
 */

#include "iostream"
using namespace std;

class Counter {
public:
	static int count;
	Counter() { count++; }
	~Counter() { count--; }
};
int Counter::count;

void f();

int main() {
	printf("%s\n", __FILE__);
	
	Counter o1;
	cout << "Objects in existence: ";
	cout << Counter::count << "\n";
	
	Counter o2;
	cout << "Objects in existence: ";
	cout << Counter::count << "\n";
	
	f();
	cout << "Objects in existence: ";
	cout << Counter::count << "\n";
	
	return 0;
}

void f() {
	Counter temp;
	cout << "Objects in existence: ";
	cout << Counter::count << "\n";
	// temp si destroyed when f() returns
}