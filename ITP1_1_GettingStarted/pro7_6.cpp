#include <iostream>
using namespace std;

int main() {
	int a = 2, b = 3, c = 2;

	cout << (a < b) << " " ;
	cout << (a <= b) << " ";
	cout << (a <= c) << "\n";
	cout << (a > b) << " ";
	cout << (a >= b) << " ";
	cout << (a >= c) << endl;

	return 0;
}