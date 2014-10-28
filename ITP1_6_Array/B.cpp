#include <iostream>
using namespace std;

int main() {
	int n, rank, card[4][14];
	char suit;
	for(int s = 0; s < 4; s++) {
		for(int r = 0; r < 14; r++) {
			card[s][r] = 0;
		}
	}
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> suit >> rank;
		if(suit == 'S') card[0][rank] = 1;
		if(suit == 'H') card[1][rank] = 1;
		if(suit == 'C') card[2][rank] = 1;
		if(suit == 'D') card[3][rank] = 1;
	}

	for(int s = 0; s < 4; s++) {
		for(int r = 1; r < 14; r++) {
			if(card[s][r]) continue;
			if(s == 0) cout << 'S';
			if(s == 1) cout << 'H';
			if(s == 2) cout << 'C';
			if(s == 3) cout << 'D';
			cout << " " << r << endl;
		}
	}

	return 0;
}