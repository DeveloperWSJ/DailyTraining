// �����ۺ���ϰ
// Created by wushijie on 2021/11/2.
//
/*
һԲ����Ӿ����ͼ��ʾ��������������Χ��һԲ�͹���������������Χ��դ����դ���۸�Ϊ35Ԫ/�ף��������Ϊ20Ԫ/ƽ���ס�
�������Ϊ3�ף���Ӿ�ذ뾶�ɼ������롣Ҫ���̼��㲢���������դ������ۡ�
ͼ����������ԲǶ��СԲ��
СԲ�ڴ�Բ�м䣬СԲΪ��Ӿ�أ���Բ��СԲ���Ϊ������
*/

#include <iostream>
using namespace std;

const double PI = 3.1415926;//PI
const double FencePrice = 35;//դ���۸�
const double ConcretePrice = 20;//�����۸�

class Circle{
private:
    double radius;//�뾶
public:
    Circle(float r);
    double Circumference() const;
    double Area() const;
};

Circle::Circle(float r) {
    radius = r;
}

//�ܳ�
double Circle::Circumference() const {
    return 2 * PI * radius;
}

//���
double Circle::Area() const {
    return PI * radius * radius;
}

int main(){
    double radius;
    double FenceCost, ConcreteCost;

    //��ʾ����
    cout << "����뾶:";
    cin >> radius;

    //��������
    Circle Pool(radius);
    Circle PoolRim(radius + 3);

    //����դ���۸�
    FenceCost = PoolRim.Circumference() * FencePrice;
    cout << "դ���۸�:" << FenceCost << endl;

    //��������۸�
    ConcreteCost = (PoolRim.Area() - Pool.Area()) * ConcretePrice;
    cout << "�����۸�:" << ConcreteCost << endl;

    system("pause");

    return 0;
}