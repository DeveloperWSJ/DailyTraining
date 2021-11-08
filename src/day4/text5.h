// 拷贝构造函数头文件
// Created by wushijie on 2021/11/8.
//

/*
#ifndef   标识符
       程序段1
#else
       程序段2
#endif
如果“标识符”未被定义过，则编译程序段1，否则编译程序段2。
*/

#ifndef DAILYTRAINING_TEXT5_H
#define DAILYTRAINING_TEXT5_H

class Clock{
    public:
        Clock(int NewH, int NewM, int NewS);

        //拷贝构造函数,如果不加，编译器会自动生成一个拷贝构造函数，因此加不加都可以直接使用
        Clock(Clock &c);

        void SetTime(int NewH, int NewM, int NewS);
        void ShowTime();

        //析构函数，编译器会自动产生一个默认的析构函数
        ~Clock();

    private:
        int Hour;
        int Minute;
        int Second;
};

#endif //DAILYTRAINING_TEXT5_H
