#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main() {
	char s[201], t[101], p[101];

	scanf("%s %s", s, p);
	strcpy(t, s);
	strcat(s, t);

	if(strstr(s, p) != NULL) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}