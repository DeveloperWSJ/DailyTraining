// 静态成员函数
// Created by wushijie on 2021/11/1.
//
// 静态成员函数只能引用属于该类的静态数据成员或静态成员函数

#include <iostream>
using namespace std;

class A{
    public:
        static void f(A a);

    private:
        int x;
};

void A::f(A a) {
    //cout << x;//错误
    a.x = 5;
    cout << a.x << endl;//正确
}

//int A::x = 6//错误

int main(){
    A a;
    //a.x = 7;//错误
    a.f(A());
    system("pause");
    return 0;
}


