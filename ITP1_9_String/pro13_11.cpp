#include <iostream>
#include <string>
using namespace std;

int main() {
	string address, nation, zip;
	address = "";

	cin >> nation >> zip;

	address = zip + nation;
	address.insert(zip.size(), ", ");
	cout << address << endl;

	return 0;
}