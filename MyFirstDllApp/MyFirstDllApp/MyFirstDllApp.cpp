// MYFIRSTDLLAPP_CPP

#include <iostream>
#include "MyMathLib.h"

using namespace std;

// declaration
double a;
double b;

void user_exit() {
	string input;

	cout << "Type 'exit' to exit...\n";
	while (input != "exit") {
		cin >> input;
	}
}


int main() {
	cout << "Give 'a'\n";
	cin >> a;

	cout << "Give 'b'\n";
	cin >> b;

	add_num(a, b);

	user_exit();
}