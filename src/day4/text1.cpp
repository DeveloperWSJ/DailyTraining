// 常对象和常引用
// Created by wushijie on 2021/11/2.
//

#include <iostream>
using namespace std;

//const 类型说明符 &引用名 常对象：必须进行初始化,不能被更新
void display(const double &r);

class A{
    public:
        A(int i, int j){
            x = i;
            y = j;
        }

    private:
        int x;
        int y;
};

//常引用做形参，在函数中不能更新r所引用的对象
void display(const double &r){
    cout << r << endl;
}

int main(){
    double d(9.5);
    display(d);
    A const a(3,4);//常对象，不能更新
    system("pause");
    return 0;
}
