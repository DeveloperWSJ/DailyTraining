// ��Ԫģ��
// Created by wushijie on 2021/11/8.
//
// ʹ����Ԫ����������������

#include <iostream>
#include <cmath>
using namespace std;

class Point{
    public:
        Point(int x = 0, int y = 0):X(x),Y(y){

        }
        int GetX(){
            return X;
        }
        int GetY(){
            return Y;
        }
        //ͨ����һ��ģ������Ϊ��һ��ģ�����Ԫ��һ��ģ���ܹ����õ���һ��ģ���б��Ǳ����ص���Ϣ
        friend float Distance(Point &a,Point &b);

    private:
        int X;
        int Y;
};

float Distance(Point &a, Point &b){
    double dx = a.X - b.X;
    double dy = a.Y - b.Y;
    return sqrt(dx*dx+dy*dy);
}

int main(){
    Point p1(3.0,5.0);
    Point p2(4.0,6.0);
    cout << "�������Ϊ��" << Distance(p1, p2) << endl;
    system("pause");
    return 0;
}