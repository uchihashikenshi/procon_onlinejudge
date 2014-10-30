#include <iostream>
#include <string>
#include <cstdio>
#include <cctype>
using namespace std;

int main() {
	int q;
	string str, cmd;
	cin >> str >> q;
	for(int i = 0; i < q; i++) {
		cin >> cmd;
		if(cmd == "replace") {
			int a, b;
			string p;
			cin >> a >> b >> p;
			str = str.replace(a, b - a + 1, p);
		}
		if(cmd == "reverse") {
			int a, b, size;
			cin >> a >> b;
			string rev;
			rev = str.substr(a, b - a + 1);
			if(rev.size() % 2 == 0) size = rev.size() / 2;
			else size = (rev.size() - 1) / 2;
			for(int i = 0; i < size; i++) {
				char t;
				t = rev[i];
				rev[i] = rev[rev.size() - i - 1];
				rev[rev.size() - i - 1] = t;
			}
			str = str.replace(a, b - a + 1, rev);
		}
		if(cmd == "print") {
			int a, b;
			cin >> a >> b;
			cout << str.substr(a, b - a + 1) << endl;
		}
	}

	return 0;
}