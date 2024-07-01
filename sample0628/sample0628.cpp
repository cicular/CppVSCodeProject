// vector<string>型変数を、変数名[][]という2次元配列として扱える件について
// https://qiita.com/hizoku09/items/852a0bfaf64bb55559b7
#include <vector>
#include <iostream>

using namespace std;

int main(){
    string p1[][2] = { { "a", "b" }, { "a", "b" }, { "a", "b" } };

    cout << "開始" << endl;
	// 入力を受け取る
	int n;
	cin >> n;

#ifndef S1
	vector<string> c(n);
	for (int i=0; i<n; i++){
		cin >> c[i];
	}
	// 各人についての勝ち数を求める
    cout << "各人についての勝ち数を求める" << endl;
	vector<int> winds(n);
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
            cout << "2層目のループ" << endl;
            cout << c[i] << endl;
            // cout << c[i][j] << endl;
		}
	}
#endif

#ifdef S2
    vector<vector<string>> sample(n);
    for (int i=0; i<n; i++){
        for (int s=0; s<n; s++){
		cin >> sample[i][s];
        }
	}
#endif
}
