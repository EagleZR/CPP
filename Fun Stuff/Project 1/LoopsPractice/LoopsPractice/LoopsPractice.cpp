// LoopsPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// For loop
	cout << "For Loop\n";
	for (int i = 0; i < 10; i++) {
		cout << i << "\n";
	}

	// While loop
	cout << "\nWhile Loop\n";
	int i = 0;
	while (i < 10) {
		cout << i++ << "\n";
	}

	// do-while loop
	cout << "\nDo-While Loop\n";
	i = 0;
	do {
		cout << i++ << "\n";
	} while (i < 10);

    return 0;
}

