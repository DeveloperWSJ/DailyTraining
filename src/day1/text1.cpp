// 联合体学习
// Created by wushijie on 2021/8/10.
//
//相同的地址,数据共享同一段内存
//某个成员被赋值后其他成员变为未定义状态
//联合里面的东西共享内存，所以静态、引用都不能用，因为他们不可能共享内存
//联合里不允许存放带有构造函数、析构函数、复制拷贝操作符等的类，因为他们共享内存，编译器无法保证这些对象不被破坏，也无法保证离开时调用析构函数
//全局匿名联合必须是静态（static）的
//匿名 union 在定义所在作用域可直接访问 union 成员
//匿名 union 不能包含 protected 成员或 private 成员

#include <iostream>
using namespace std;

union myun{
    struct {int x; int y; int z;}u;
    int k;
}a;
union myun1{
    int x;
    int y;
    int z;
}b;

int main(){
    a.u.x =4;
    a.u.y =5;
    a.u.z =6;
    a.k = 0;//覆盖掉第一个int空间值

    b.x = 1;
    b.y = 2;
    b.z = 3;//只会有最后一个int的数值

    printf("%d %d %d %d\n", a.u.x, a.u.y, a.u.z, a.k);
    printf("%d\n", b.y);

    system("pause");

    return 0;
};