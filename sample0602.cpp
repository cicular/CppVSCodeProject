#include <iostream>
using namespace std;

int a = 0; // グローバル変数

void func(){
    int b = 0; // ローカル変数
    static int c = 0; // ローカル変数にstaticをつけると、グローバル変数と同じ記憶寿命になる。

    cout << "変数aは" << a << "変数bは" << b << "変数cは" << c << "です" << endl;
    a++;
    b++;
    c++;
}

int main(){
    // C++のバージョン確認
    std::cout << __cplusplus << std::endl;

#ifdef SAMPLE
    // 配列の範囲外アクセス
    // このコードは10個の要素を持つ配列 arr を定義していますが、
    // 15番目の要素（arr[15]）を取得しようとしています。C++では配列の範囲外アクセスに対して特定のエラーが発生するわけではなく、未定義の動作（undefined behavior）になります。
    // 未定義の動作というのは、予期しない動作をするか、クラッシュする可能性があります。
    // これをtry-catchで捕捉することはできません。
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int value = arr[15];  // 配列の範囲外アクセス
    cout << "Value: " << value << endl;
    // 範囲外アクセスを避けるためには、配列のインデックスが配列のサイズ以内であることを確認する必要があります。
    cout << "正常終了？";
#endif

#ifdef SAMPLE2
    // intの範囲を超えた代入をしても、実行時にエラーにはならない。
    int i = 9999999999999999999999;
    cout << i << endl;
    cout << "正常終了？";
#endif

#ifdef SAMPLE3
    for (int i=0; i<5; i++){
        func();
    }
#endif

    return 0;
}
