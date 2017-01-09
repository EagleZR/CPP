// MethodsPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int methodOne(int value) {
	return value * value;
}

int main() {
	// 1. Read input
	cout << "Please input a number to be squared: ";
	int input;
	cin >> input;

	// 2. Send input to method
	int calculatedValue = methodOne (input);

	// 3. Output the calculated value
	cout << "The calculated value is: " << calculatedValue << "\n\n";

	// End Program
	cout << "Press \'Enter\' to exit the program...";
	// TODO figure out how to make this work
    return 0;
}