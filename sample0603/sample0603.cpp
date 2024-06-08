#include "sample0603.hpp"

int Sample0603::privateMethod(){
    cout << "privateMethod called!" << endl;

    struct aa* a1;
    struct bb* b1;
    // unsigned char*、1バイトごとにアドレスが進むポインタ）にキャスト
    // ポインタ間のアドレス差をバイト数として取得。
    long r = (unsigned char*)a1 - (unsigned char*)b1;
    cout << r << endl;

    return 0;
}

int Sample0603::publicMethod(){
    cout << "publicMethod called!" << endl;
    privateMethod();
    return 0;
}

int main(){
    Sample0603 sample0603;
    sample0603.publicMethod();
}
