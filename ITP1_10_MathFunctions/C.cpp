#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

double val(int sum, int n, int s[1001]) {
	double m = 1.0 * sum / n, a = 0.0, sq = 0.0;
	for(int i = 0; i < n; i++) {
		sq += ((double)s[i] - m) * ((double)s[i] - m);
	}
	a = sqrt(sq / n);
	return a;
}

int main() {
	int n, s[1001];
	while(1) {
		cin >> n;
		if(n == 0) break;
		int sum = 0;
		for(int i = 0; i < n; i++) {cin >> s[i]; sum += s[i];} //ここと
		// for(int i = 0; i < n; i++) sum += s[i]; //ここをまとめると何故かセグフォが出る[FIX ME]

		printf("%lf\n", val(sum, n, s));
	}
	return 0;
}