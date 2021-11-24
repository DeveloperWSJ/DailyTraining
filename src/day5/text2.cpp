// 构造函数调用次序
// Created by wushijie on 2021/11/24.
//

#include <iostream>
using namespace std;

class A{
    int x;
    public:
        A(int i = 0){
            x = i;
            cout << "A----" << x << endl;
        }
};

class B{
    int y;
    public:
        B(int i){
            y = i;
            cout << "B----" << y << endl;
        }
};

class C{
    int z;
    public:
        C(int i){
            z = i;
            cout << "C----" << z << endl;
        }
};

class D : public B{
    public:
        C c1;
        C c2;
        A *a1 = new A(10);
        A a0;
        A a4;
        D() : a4(4), c2(2), c1(1),B(1){
            cout << "D----5" << endl;
        }
};

//*****//
//先构造基类
//在构造成员
//最后构造自身，调用构造函数
//基类构造顺序由派生层次决定：最远的基类最先构造 成员构造顺序和定义顺序符合 析构函数的析构顺序与构造相反
int main(){
    D d;
    system("pause");
}