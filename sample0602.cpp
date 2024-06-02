#include <iostream>

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
    std::cout << "Value: " << value << std::endl;
    // 範囲外アクセスを避けるためには、配列のインデックスが配列のサイズ以内であることを確認する必要があります。
    std::cout << "正常終了？";
#endif
    return 0;
}
