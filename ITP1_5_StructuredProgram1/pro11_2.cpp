#include <iostream>
using namespace std;

int cnt; //大域変数（どこからでもアクセスできる）

int increment() {
	int i = 0; //局所変数の初期化（この関数内でしか使用できない）
	return cnt++; //値を返して大域変数をインクリメントする
}

int main() {
	int i = 0; //局所変数の初期化（この関数内でしか使用できない）
	cnt = 0; //大域変数を初期化
	cout << cnt++ << " "; //大域変数を出力してインクリメント
	cout << increment() << " "; //関数の戻り値を出力。この時、関数内で大域変数も変更される

	{
		int j = cnt; //局所変数を初期化（このブロック内でしか使用できない）
		cout << j++ << " "; //局所変数を出力してインクリメント
		i = j;
	} 
	int x = 0; //xはこれ以降で使用可能に
	//jはもう使用できない。が、jの値はiに存在する
	cout << i << endl;

	return 0;
}