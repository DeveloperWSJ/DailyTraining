// 派生类给基类传递参数
// Created by wushijie on 2021/12/1.
//

#include <iostream>
using namespace std;

class Point{
    protected:
        int x;
        int y;
    public:
        Point(int a = 0, int b = 0){
            x = a;
            y = b;
            cout << "con Po("<< x <<", "<< y <<")" << endl;
        }
};

class Line : public Point{
    protected:
        int len;
    public:
        Line(int a, int b, int l):Point(a, b){
            len = l;
            cout << "con line,len.." << len << endl;
        }
};

int main(){
    Line l1(2,2,3);
    system("pause");
}

