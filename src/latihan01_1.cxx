/**
 * @file latihan01_1.cxx
 * @brief An Overview of C++
 * @details A Sample C++ Program
 */

#include <iostream>

using namespace std;

int main(void)
{
	printf("%s\n", __FILE__);
	
	int i;
	cout << "This is output.\n"; // this is a single line comment
	/* you can still use C style comments */
	cout << "Enter a number: ";
	cin >> i;
	
	// now, output a number using <<
	cout << i << " squared is " << i*i << "\n";
	
	return 0;
}
