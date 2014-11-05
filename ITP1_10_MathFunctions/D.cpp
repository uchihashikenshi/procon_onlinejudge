#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
   int n, x[100], y[100];
   cin >> n;
   for(int i = 0; i < n; i++) cin >> x[i];
   for(int j = 0; j < n; j++) cin >> y[j];

   double d[4];
   for(int i = 0; i < 4; i++) d[i] = 0.0;

   for(int p = 1; p < 4; p++) {
      for(int i = 0; i < n; i++) {
         d[p] += pow(fabs(x[i] - y[i]), p);
      }
      d[p] = pow(d[p], 1.0 / p);
   }

   for(int i = 0; i < n; i++) {
      d[0] = (d[0] < fabs(x[i] - y[i])) ? fabs(x[i] - y[i]) : d[0];
   }

   printf("%lf\n%lf\n%lf\n%lf\n", d[1], d[2], d[3], d[0]);

   return 0;
}
