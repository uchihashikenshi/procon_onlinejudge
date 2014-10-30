#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string hana, taro;
	int cnt[2] = {0, 0};
	for(int i = 0; i < n; i++) {
		cin >> taro >> hana;
		if(taro > hana) cnt[0] += 3;
		else if(taro < hana) cnt[1] += 3;
		else {cnt[0]++; cnt[1]++;}
	}
	cout << cnt[0] << " " << cnt[1] << endl;

	return 0;
}