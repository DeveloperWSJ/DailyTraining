// 重载的时钟
// Created by wushijie on 2021/11/9.
//

#include <iostream>
using namespace std;
class Time{
    private:
        int hh;
        int mm;
        int ss;

    public:
        Time(int h = 0, int m = 0, int s = 0) : hh(h),mm(m),ss(s){

        }
        void operator()(int h,int m,int s){
            hh = h;
            mm = m;
            ss = s;
        }
        void ShowTime(){
            cout << hh << ";" << mm << ";" << ss << endl;
        }
};

int main(){
    Time t1(10,20,30);
    t1.ShowTime();
    t1.operator()(12,15,16);
    t1.ShowTime();
    t1(10,10,10);
    t1.ShowTime();
    system("pause");
    return 0;
}