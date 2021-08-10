// 结构体
// Created by wushijie on 2021/8/10.
//

#include <iostream>
using namespace std;

struct student{
    int num;
    char name[20];
    char gender;
};

int main(){

    student s = {10, "jjj", 'M'};

    cout<<s.num<<endl;
    cout<<sizeof(s.num)<<endl;
    cout<<sizeof(s.name)<<endl;
    cout<<sizeof(s.gender)<<endl;
    cout<<sizeof(s)<<endl;

    system("pause");
    return 0;
}