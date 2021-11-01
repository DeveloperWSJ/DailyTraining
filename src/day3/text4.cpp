// 类向前声明
// Created by wushijie on 2021/11/1.
//
// 使用前向引用声明虽然可以解决一些问题，但并不是万能的
// 需要注意：
// 尽管使用了前向声明，但是在提供一个完整的类声明之前，不能声明该类的对象
// 也不能在内联成员函数中使用该类的对象
// 当使用前向引用声明时，只能使用被声明的符号，而不能涉及类的任何细节

#include <iostream>
using namespace std;

//第一种
class Fred;//前向引用声明
class Barney{
    //Fred x;//错误，类Fred的声明尚不完善
};
class Fred{
    Barney y;//正确
};

//第二种
class Fred1;//前向引用声明
class Barney1{
    public:
        void method(){
            //x -> yabbaDabbaDo();//错误，Frid1类的对象在定义之前被使用
        }
    private:
        Fred1* x;//正确，经过前向引用声明，可以声明Fred1类的对象指针
};
class Fred1{
    public:
        void yabbaDabbaDo();

    private:
        Barney1* y;
};
