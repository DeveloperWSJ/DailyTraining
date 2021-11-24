// 构造顺序
// Created by wushijie on 2021/11/24.
//

#include <iostream>
using namespace std;

/*
先构造成员
再构造自身（调用构造函数）
*/
/*
析构是相反
*/
class A{
    public:
        A(){
            cout << "coA" << endl;
        }
        ~A(){
            cout << "deA" << endl;
        }
};

class B{
    public:
        B(){
            cout << "coB" << endl;
        }
        ~B(){
            cout << "deB" << endl;
        }
};

class  C{
    public:
        C(){
            cout << "coC" << endl;
        }
        ~C(){
            cout << "deC" << endl;
        }

        B b;
        A a;
};

int main(){
    C c;
    system("pause");
}