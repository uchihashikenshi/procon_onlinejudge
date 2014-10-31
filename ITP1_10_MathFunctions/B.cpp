#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int a, b, C;
	cin >> a >> b >> C;

	double PI = acos(-1), rad, c;
	rad = PI * C / 180.0;
	double S, L, h;
	S = a * b * sin(rad) / 2.0;
	c = sqrt(a * a + b * b - 2.0 * a * b * cos(rad));
	L = a + b + c;
	h = b * sin(rad);
	printf("%lf\n%lf\n%lf\n", S, L, h);

	return 0;
}