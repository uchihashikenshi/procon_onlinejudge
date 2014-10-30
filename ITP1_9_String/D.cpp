#include <iostream>
#include <string>
#include <cstdio>
#include <cctype>
using namespace std;

int main() {
	int a, b, q;
	string str, cmd, p;
	cin >> str >> q;
	for(int i = 0; i < q; i++) {
		cin >> cmd >> a >> b;
		if(cmd == "replace") {
			cin >> p;
			str = str.replace(a, b - a + 1, p);
		}
		if(cmd == "reverse") {
			string tmp = str.substr(a, b - a + 1);
			int n = tmp.size();
			for(int i = 0; i < n; i++) {
				str[i + a] = tmp[n - i -1];
			}
		}
		if(cmd == "print") {
			cout << str.substr(a, b - a + 1) << endl;
		}
	}

	return 0;
}