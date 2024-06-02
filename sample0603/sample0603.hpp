#ifndef SAMPLE0603HEADER  // インクルードガードの開始
#define SAMPLE0603HEADER

#include <iostream>
using namespace std;

class Sample0603{

    private:
        int privateValue;
        int privateMethod();

        struct aa{
            int a1;
        };

        struct bb{
            int b1;
        };

    public:
        int publicValue;
        int publicMethod();
};

#endif  // インクルードガードの終わり
