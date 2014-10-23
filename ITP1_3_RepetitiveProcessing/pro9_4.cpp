#include <iostream>
using namespace std;

int main() {
	int i, n, limit = 10;

	cin >> n;

	for(i = 1; i <= n; i++) {
		if(limit < i) break;
		cout << i << " ";
	}
	cout << "[" << i << "]" << endl;

	return 0;
}