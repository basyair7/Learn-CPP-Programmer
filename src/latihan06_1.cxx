/**
 * @file latihan06_1.cxx
 * @brief Classes and Objects
 * @details Classes
 */

#include <iostream>
using namespace std;

class myclass {
public:
	int i, j, k; // accessible to entrie program
};

int main() {
	printf("%s\n", __FILE__);
	
	myclass a, b;
	
	a.i = 100; // access to i, j, and k is OK
	a.j = 4;
	a.k = a.i * a.j;
	
	b.k = 12; // remember, a.k and b.k are different
	
	cout << a.k << " " << b.k << endl;
	
	return 0;
}