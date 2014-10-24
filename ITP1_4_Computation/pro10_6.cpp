#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int x, y, *p;
	p = &x;
	cout << p << endl;
	*p = 7;
	y = *p + x;
	cout << y << endl;

	return 0;
}