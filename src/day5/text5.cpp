// 派生类构造函数
// Created by wushijie on 2021/11/29.
//

#include <iostream>
using namespace std;

class Base{
    private:
        int x;

    public:
        Base(int a){
            x = a;
            cout << "Base" << x << endl;
        }
        ~Base(){
            cout << "Base de" << endl;
        }
};

class Derived : public Base{
    private:
        int y;

    public:
        Derived(int a, int b) : Base(a){
            y = b;
            cout << "Derived = " << y << endl;
        }
        ~Derived(){
            cout << "Derived de" << endl;
        }
};

int main(){
    Derived d(1,2);
    system("pause");
    return 0;
}