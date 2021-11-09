// 重载++的时钟
// Created by wushijie on 2021/11/9.
//

#include <iostream>
using namespace std;

class Time{
    public:
        Time(int h = 0, int m = 0, int s = 0){
            hour = h;
            minute = m;
            second = s;
        }
        void operator++();
        void showTime(){
            cout << "Time:" << hour << ";" << minute << ";" << second <<endl;
        }

    private:
        int hour;
        int minute;
        int second;
};

void Time::operator++() {
    ++second;
    if (second = 60){
        second = 0;
        ++minute;
        if (minute = 60){
            minute = 0;
            hour = 24;
        }
    }
}

int main(){
    Time t(23,59,59);
    ++t;
    t.showTime();
    system("pause");
    return 0;
}