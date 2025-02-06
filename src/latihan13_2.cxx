/**
 * @file latihan13_2.cxx
 * @brief Classes and Objects
 * @details Statics Class Members : Static Data Members
 */

#include "iostream"
using namespace std;

class c1 {
	static int resource;
public:
	int get_resource();
	void free_resource() { resource = 0; }
};

int c1::resource; // define resource

int c1::get_resource() {
	if (resource) return 0; // resource already in use
	else {
		resource = 1;
		return resource; // resource allocate to this object
	}
}

int main() {
	printf("%s\n", __FILE__);
	
	c1 ob1, ob2;
	
	if (ob1.get_resource()) cout << "ob1 has resource\n";
	
	if (!ob2.get_resource()) cout << "ob2 denied resource\n";
	
	if (ob2.get_resource())
		cout << "ob2 can now use resource\n";
	
	return 0;
}