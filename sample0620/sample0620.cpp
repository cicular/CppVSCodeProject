#include <iostream>
using namespace std;

#pragma push
// #pragma pack(4)
struct StructBBB{
    int value1;
    int value2;
    short value3;
    short value4;
};

struct StructAAA{
    char value0;
    int value1;
    int value2;
    short value3;
    StructBBB* value4;
    StructBBB value5;
};
#pragma pop

int main(){
    cout << "intのサイズ:" << sizeof(int) << endl;
    cout << "shortのサイズ:" << sizeof(short) << endl;
    cout << "ポインタ変数のサイズ:" << sizeof(void*) << endl;

    cout << "intのアライメント:" << alignof(int) << endl;
    cout << "shortのアライメント:" << alignof(short) << endl;
    cout << "ポインタ変数のアライメント:" << alignof(void*) << endl;

    StructAAA structAAA;
    cout << sizeof(structAAA) << endl;
}
