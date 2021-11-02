// 函数综合练习
// Created by wushijie on 2021/11/2.
//
/*
一圆型游泳池如图所示，现在需在其周围建一圆型过道，并在其四周围上栅栏。栅栏价格为35元/米，过道造价为20元/平方米。
过道宽度为3米，游泳池半径由键盘输入。要求编程计算并输出过道和栅栏的造价。
图形描述：大圆嵌套小圆：
小圆在大圆中间，小圆为游泳池，大圆与小圆间隔为过道。
*/

#include <iostream>
using namespace std;

const double PI = 3.1415926;//PI
const double FencePrice = 35;//栅栏价格
const double ConcretePrice = 20;//过道价格

class Circle{
private:
    double radius;//半径
public:
    Circle(float r);
    double Circumference() const;
    double Area() const;
};

Circle::Circle(float r) {
    radius = r;
}

//周长
double Circle::Circumference() const {
    return 2 * PI * radius;
}

//面积
double Circle::Area() const {
    return PI * radius * radius;
}

int main(){
    double radius;
    double FenceCost, ConcreteCost;

    //提示输入
    cout << "输入半径:";
    cin >> radius;

    //声明对象
    Circle Pool(radius);
    Circle PoolRim(radius + 3);

    //计算栅栏价格
    FenceCost = PoolRim.Circumference() * FencePrice;
    cout << "栅栏价格:" << FenceCost << endl;

    //计算过道价格
    ConcreteCost = (PoolRim.Area() - Pool.Area()) * ConcretePrice;
    cout << "过道价格:" << ConcreteCost << endl;

    system("pause");

    return 0;
}