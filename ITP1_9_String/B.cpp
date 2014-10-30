#include <iostream>
#include <string>
using namespace std;

string shuffle(string s, int h) {
	string t;
	t = s.substr(0, h);
	s = s.erase(0, h);
	s = s + t;
	return s;
}

int main() {
	while(1) {
		int m; 
		string card;
		cin >> card >> m;
		if(card == "-") break;
		for(int i = 0; i < m; i++) {
			int h;
			cin >> h;
			card = shuffle(card, h);
		}
		cout << card << endl;
	}
	return 0;
}