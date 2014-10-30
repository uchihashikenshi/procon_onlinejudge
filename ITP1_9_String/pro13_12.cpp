#include <iostream>
#include <string>
using namespace std;

int main() {
	string numbers = "0123456789";
	string sub, rep;

	cout << numbers.size() << endl;

	cout << numbers.substr(3, 5) << endl;

	cout << numbers.replace(3, 4, "ABCD") << endl;

	return 0;
}