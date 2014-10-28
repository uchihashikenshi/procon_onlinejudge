#include <iostream>
using namespace std;

int main() {
	int r, c;
	cin >> r >> c;
	int A[r + 1][c + 1];

	for(int i = 0; i < r + 1; i++) {
		for(int j = 0; j < c + 1; j++) {
			A[i][j] = 0;
		}
	}

	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cin >> A[i][j];
			A[i][c] += A[i][j];
		}
	}

	for(int i = 0; i < c + 1; i++) {
		for(int j = 0; j < r; j++) {
			A[r][i] += A[j][i];
		}
	}

	for(int i = 0; i < r + 1; i++) {
		for(int j = 0; j < c + 1; j++) {
			if(j != 0) cout << " ";
			cout << A[i][j];
		}
		cout << endl;
	}

	return 0;
}