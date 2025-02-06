/**
 * @file latihan02.cxx
 * @brief An Overview of C++
 * @details Introducing C++ Classes
 */
 
#include <iostream>

using namespace std;

#define SIZE 100

// This creates the class stack.
class stack {
	// private modifier
	int stck[SIZE];
	int tos;

public: // public modifier
	void init();
	void push(int i);
	int pop();
};

void stack::init() {
	tos = 0;
}

void stack::push(int i) {
	if (tos == SIZE) {
		cout << "Stack is full.\n";
		return;
	}
	stck[tos] = i;
	tos++;
}

int stack::pop() {
	if (tos == 0) {
		cout << "Stack underflow.\n";
		return 0;
	}
	
	tos--;
	return stck[tos];
}

int main() {
	printf("%s\n", __FILE__);
	
	stack stack1, stack2; // create two stack objects
	
	stack1.init();
	stack2.init();
	
	stack1.push(1);
	stack2.push(2);
	
	stack1.push(3);
	stack2.push(4);
	
	cout << stack1.pop() << " ";
	cout << stack1.pop() << " ";
	cout << stack2.pop() << " ";
	cout << stack2.pop() << "\n";
	
	// output : 3 1 4 2
	
	return 0;
}

