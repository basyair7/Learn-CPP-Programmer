/**
 * @file latihan05.cxx
 * @brief An Overview of C++
 * @details Constructors and Destructors
 */

// Using a constructor and destructor.
#include <iostream>
using namespace std;

#define SIZE 100

// This creates the class stack
class stack {
	char label;
	int stck[SIZE];
	int tos;
	
public:
	stack(char label);  // constructor
	~stack(); // destructor
	void push(int i);
	int pop();
};

// stack's constructor function
stack::stack(char lbl) {
	tos = 0;
	label = lbl;
	cout << "Stack " << label << " Initialized\n";
}

// stack's destructor function
stack::~stack() {
	cout << "Stack " << label << " Destroyed\n";
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
		cout << "Stack uderflow.\n";
		return 0;
	}
	
	tos--;
	return stck[tos];
}

int main() {
	stack a('a'), b('b'); // create two stack objects
	
	a.push(1);
	b.push(2);
	
	a.push(3);
	b.push(4);
	
	cout << a.pop() << " ";
	cout << a.pop() << " ";
	cout << b.pop() << " ";
	cout << b.pop() << endl;
	
	return 0;
}