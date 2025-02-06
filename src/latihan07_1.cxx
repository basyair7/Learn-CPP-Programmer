/**
 * @file latihan07_1.cxx
 * @brief Classes and Objects
 * @details Unions and Classes Are Related
 */

#include <iostream>
using namespace std;

union swap_byte {
	void swap();
	void set_byte(unsigned short i);
	void show_word();
	
	unsigned short u;
	unsigned char c[2];
};

void swap_byte::swap() {
	unsigned char t;
	
	t = c[0];
	c[0] = c[1];
	c[1] = t;
}

void swap_byte::show_word() {
	cout << u;
}

void swap_byte::set_byte(unsigned short i)
{
	u = i;
}

int main() {
	printf("%s\n", __FILE__);
	
	swap_byte b;
	int i = 49034;
	cout << i << endl;
	
	b.set_byte(i);
	b.swap();
	b.show_word();
	
	cout << endl;
	
	return 0;
}