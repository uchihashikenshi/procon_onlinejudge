#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int A[n][m], b[m], em[n];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	for(int i = 0; i < m; i++) {
		cin >> b[i];
	}

	for(int i = 0; i < n; i++) {
		em[i] = 0;
		for(int j = 0; j < m; j++) {
			em[i] += A[i][j] * b[j];
		}
		cout << em[i] << endl;
	}

	return 0;
}