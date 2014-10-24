#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long a, max = -1000000, min = 1000000, sum = 0;

	for(int i = 0; i < n; i++) {
		cin >> a;
		if(max < a) max = a;
		if(a < min) min = a;
		sum += a;
	}

	cout << min << " " << max << " " << sum << endl;

	return 0;
}