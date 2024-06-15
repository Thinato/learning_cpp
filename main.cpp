#include <iostream>

using namespace std;

void foo() {
	cout << "you called me!" << endl;
	return;
}

void foo(int bar) {
	cout << "you called me, but with an arg of " << bar << endl;
	return;
}


void print(const char *str) {
	cout << "log: " << str << endl;
}

void print(int i) {
	cout << "log: " << i << endl;
}

void print(float f) {
	cout << "log: " << f << endl;
}

int main() {
	cout << "Hello World!" << endl;
	foo();
	foo(123);
	print("hello again!");
	print(822);
	print(9.23f);
	return 0;
}
