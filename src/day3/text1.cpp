// 静态成员函数
// Created by wushijie on 2021/11/1.
//
// 类外代码可以使用类名和作用域操作符来调用静态成员函数
// 静态成员函数只能引用属于该类的静态数据成员或者静态成员函数

#include <iostream>
using namespace std;

class Application{
    public:
        static void f();
        static void g();

    private:
        static int global;
};

int Application::global = 0;

void Application::f() {
    global = 5;
}

void Application::g() {
    cout << global << endl;
}

int main(){
    Application::g();
    Application::f();
    Application::g();
    system("pause");
    return 0;
}