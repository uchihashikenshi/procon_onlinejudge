#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	string color = "black";

	color = "white";

	for(int i = 1; i <= n; i++) {
		cin >> color;
		cout << i << ": " << color << endl; 
	}

	return 0;
}