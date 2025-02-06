/**
 * @file latihan07.cxx
 * @brief Classes and Objects
 * @details Structures and Classes Are Related
 */
 
// Using a structure to define a class.
#include <iostream>
#include <cstring>
using namespace std;

struct mystr_struct {
	void buildstr(char *s); // public
	void showstr();
private: // now go private
	char str[255];
};

void mystr_struct::buildstr(char *s) {
	if (!*s) *str = '\0'; // initialize string
	else strcat(str, s);
}

void mystr_struct::showstr() {
	cout << str << "\n";
}

class mystr_class {
	char str[255]; // private
public: // now go public
	void buildstr(char *s);
	void showstr();
};

void mystr_class::buildstr(char *s) {
	if (!*s) *str = '\0'; // initialize string
	else strcat(str, s);
}

void mystr_class::showstr() {
	cout << str << "\n";
}

int main() {
	printf("%s\n", __FILE__);
	
	mystr_struct s; // or mystr_class s;
	
	s.buildstr(""); // init
	s.buildstr("Hello ");
	s.buildstr("there!");
	
	s.showstr();
	
	return 0;
}
