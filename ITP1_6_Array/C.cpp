#include <iostream>
using namespace std;

int main() {
	int n, a[5][4][11], b, f, r, v;

	for(int i = 1; i < 5; i++)
		for(int j = 1; j < 4; j++)
			for(int k = 1; k < 11; k++)
				a[i][j][k] = 0;

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> b >> f >> r >> v;
		a[b][f][r] += v;
	}

	for(int i = 1; i < 5; i++) {
		for(int j = 1; j < 4; j++) {
			for(int k = 1; k < 11; k++) {
				cout << " " << a[i][j][k];
			}
			cout << "\n";
		}
		if(i == 4) continue;
		for(int h = 0; h < 20; h++) {
			cout << '#';
		}
		cout << endl;
	}
}