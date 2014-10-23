#include <iostream>
using namespace std;

int divi(int x, int y);

int divi(int x, int y) {
	if(y == 0) {
		cout << "division by zero." << endl;
		return -1;
	}
	return x / y;
}

int main() {
	int x, y;
	cin >> x >> y;

	cout << divi(x, y) << endl;
	return 0;
}