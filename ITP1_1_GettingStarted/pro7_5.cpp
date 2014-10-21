#include <iostream>
using namespace std;

int main() {
	int a = 3, b = 3, c = 1;
	bool result1 = ( a == b == c );
	cout << result1 << endl;

	int x = 2, y = 1, z = 0;
	bool result2 = ( x == y == z );
	cout << result2 << endl;

	return 0;
}