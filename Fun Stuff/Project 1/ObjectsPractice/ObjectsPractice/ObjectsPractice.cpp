// ObjectsPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class ObjectInSameFile {
	public: 
	int val1;
	int val2;
	int val3;
	ObjectInSameFile(int val1, int val2, int val3);
	ObjectInSameFile();

	private: 
	int calc1;
};

ObjectInSameFile::ObjectInSameFile(int setVal1, int setVal2, int setVal3) {
	val1 = setVal1;
	val2 = setVal2;
	val3 = setVal3;
}

ObjectInSameFile::ObjectInSameFile() {
	val1 = 0;
	val2 = 0;
	val3 = 0;
}

class Animal {
	public:
	Animal() {
		name = "";
		mass = 0.0f;
		height = 0.0f;
		width = 0.0f;
	}
	Animal(string name) {
		_name = name;
		mass = 0.0f;
		height = 0.0f;
		width = 0.0f;
	}
	// Name
	string GetName() {
		return name;
	}
	void SetName(string setName) {
		name = setName;
	}
	// Mass
	float GetMass() {
		return mass;
	}
	void SetMass(float newMass) {
		mass = newMass;
	}
	// Height
	float GetHeight() {
		return height;
	}
	void SetHeight(float newHeight) {
		height = newHeight;
	}
	// Width
	float GetWidth() {
		return width;
	}
	void SetWidth(float setWidth) {
		width = setWidth;
	}

	private:
	string name;
	float mass;
	float height;
	float width;
};

int main() {

    return 0;
}

