/**
 * @file latihan01_2.cxx
 * @brief An Overview of C++
 * @details A Closer Look at the I/O Operators
 */

#include <iostream>

using namespace std;

int main() {
	printf("%s\n", __FILE__);
	
	float f;
	char str[80];
	double d;
	
	cout << "Enter two floating point numbers: ";
	cin >> f >> d;
	
	cout << "Enter a string: ";
	cin >> str;
	
	cout << f << " " << d << " " << str << "\n" << endl;
	
	return 0;
}
