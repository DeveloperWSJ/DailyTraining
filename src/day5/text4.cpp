// 没有构造函数的派生类
// Created by wushijie on 2021/11/25.
//

#include <iostream>
using namespace std;
class A{
    public:
        A(){
            cout << "CoA" << endl;
        }
        ~A(){
            cout << "DeA" << endl;
        }
};

class B : public A{
    public:
    ~B(){
        cout << "DeB" << endl;
    }
};

int main(){
    B b;
    system("pause");
}