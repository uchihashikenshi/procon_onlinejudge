#include <iostream>
using namespace std;

int main() {
	int i = 0, sum = 0, n;
	cin >> n;

	while(i <= n) {
		sum += i;
		i++;
	}

	cout << sum << endl;

	return 0;
}