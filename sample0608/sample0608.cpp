#include "sample0608.hpp"

#ifdef S0608_01
// (void*) キャスト
int main(){
    int hoge = 90000;
    printf("hoge..%d\n", hoge);

    // 2つのprintfの結果は同じになりますが、(void*)にはどのような意味がありますか？
	printf("&hoge..%p\n", (void*)&hoge);
	printf("&hoge..%p\n", &hoge);

    // &hoge は int* 型ですが、これを (void*) にキャストすることで、
    // printf の %p指定子に対して適切な形式の引数を提供しているのです。
    // 第二の printf でキャストを省略しても同じ結果になる場合が多いですが、
    // これはコンパイラが「暗黙のキャスト」を行っているためです。
    // しかし、常に明示的にキャストを行うことが良いプログラミング習慣とされています。

}
#endif

#ifdef S0608_02
int main(){
    // intに代入可能な範囲を超過していても、ビルドエラーにならない。
    // 少なくともg++では、overflowワーニングが出るだけ。
    int hoge = 9999999999999;
    printf("hoge %d\n", hoge);
}
#endif

