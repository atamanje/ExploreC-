/*	MYMATHLIB_CPP
	Implementation of MyMathLib.h*/

#include "pch.h"
#include <utility>
#include <limits.h>
#include "MyMathLib.h"
#include <iostream>

using namespace std;

void add_num(double a, double b) {
	cout << a << " + " << b << " = " << a + b << "\n";
}

void add_num(int a, int b) {
	cout << a << " + " << b << " = " << a + b << "\n";
}

void add_num(int a, double b) {
	cout << a << " + " << b << " = " << a + b << "\n";
}

void add_num(double a, int b) {
	cout << a << " + " << b << " = " << a + b << "\n";
}
