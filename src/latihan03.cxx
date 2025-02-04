/**
 * @file latihan03.cxx
 * @brief An Overview of C++
 * @details Function Overloading
 */
 
#include <iostream>

// abs is overloaded three ways
int abs(int i);
double abs(double d);
long abs(long l);

int main() {
	std::cout << abs(-10) << "\n";
	std::cout << abs(-11.0) << "\n";
	std::cout << abs(-9L) << "\n";
	
	return 0;
}

int abs(int i) {
	std::cout << "Using integer abs()\n";
	
	return i < 0 ? -i : i;
}

double abs(double d) {
	std::cout << "Using double abs()\n";
	
	return d < 0.0 ? -d : d;
}

long abs(long l) {
	std::cout << "Using long abs()\n";
	
	return l < 0 ? -l : l;
}
