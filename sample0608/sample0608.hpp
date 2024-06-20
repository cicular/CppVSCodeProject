#ifndef SAMPLE0608HEADER  // インクルードガードの開始
#define SAMPLE0608HEADER

#include <iostream>
using namespace std;

class Sample0608{

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
