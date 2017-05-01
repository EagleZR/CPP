#pragma once

using namespace std;

void testMethod();

class testClass {
private:
	int *value;
public:
	testClass();
	testClass(int value);
	~testClass();
	void setValue(int value);
	int getValue() const;
};