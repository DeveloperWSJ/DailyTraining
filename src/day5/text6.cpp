// 派生类构造函数调用顺序
// Created by wushijie on 2021/12/1.
//

#include <iostream>
using namespace std;

class A{
    public:
        A(){
            cout << "Con A" << endl;
        }
        ~A(){
            cout << "Des A" << endl;
        }
};

class B{
    public:
        B(){
            cout << "Con B" << endl;
        }
        ~B(){
            cout << "Des B" << endl;
        }
};

class C{
    public:
        C(){
            cout << "Con C" << endl;
        }
        ~C(){
            cout << "Des C" << endl;
        }
};

class D : public C{
    public:
        D(){
            cout << "Con D" << endl;
        }
        ~D(){
            cout << "Des D" << endl;
        }

        B b;
        A a;
        C c;
};

int main(){
    D d;
    system("pause");
    return 0;
}