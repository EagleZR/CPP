// ConsoleApplication1.cpp : Defines the entry point for the console application.
// not sure what I'm doing.....

#include "stdafx.h" // Precompiled header file (I hope)
#include "ConsoleApplication1.h"

int main() {
	testClass *test = new testClass(5);

	cout << "The original value is " << (*test).getValue() << "\n";
	test->setValue(8);
	cout << "The adjusted value is " << test->getValue() << "\n";

	testMethod();

	cout << "Press 'ENTER' to exit the program.";
	string exitString;
	cin >> exitString;

	return 0;
}

void testMethod() {
	cout << "Just messing around. Hopefully, I'll know what I'm doing in this someday... :'D\n";
}


	testClass::testClass() {
		*(this->value) = 0;
	}

	testClass::testClass(int value) {
		*(this->value) = value;
	}

	testClass::~testClass() {
		delete this->value;
		this->value = nullptr;
	}

	int testClass::getValue() const {
		return *(this->value);
	}

	void testClass::setValue(int value) {
		*(this->value) = value;
	}