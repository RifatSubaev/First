#include <iostream>
#include<string>
using namespace std;
class A {
public:
	int a = 5;
};
class Stroka {
public:
	string a = "urdhguertg";
};
class Copy {
public:
	Stroka b;
	string c;

};
class String {
public:
	char *arr;
	String() {
		cout << "A constr" << endl;
		arr = new char[10];
	}
	~String() {
		delete[]arr;
		cout << "A destr" << endl;
	}

};
class PositiveInteger {
	int value;
public:
	PositiveInteger() {

	}
	PositiveInteger(int x) {
		value = x;
	}
	~PositiveInteger() {

	}
	int getValue() {
		return value;
	}
	void setValue(int _value) {
		if (_value >= 0)
			value = _value;
	}
};
class Auto {
public:
	string name;
	double speed;
	Auto() {
		cout << "Enter name to the car" << endl;
	}
};
class student {
public:
	string name;
	int kol_vo_of_students;

};
int main() {
	Stroka f;
	Copy d;
	String a;

	d.c = f.a;
	cout << d.c;
	return 0;
}