#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string toLower(string s) {
	for(int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}
	return s;
}

int main() {
	int cnt = 0;
	string target, text;
	cin >> target;

	target = toLower(target);
	while(1) {
		cin >> text;
		if(text == "END_OF_TEXT") break;
		text = toLower(text);
		if(target == text) cnt++;
	}
	cout << cnt << endl;

	return 0;
}