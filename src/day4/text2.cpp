// ���������ͨ����
// Created by wushijie on 2021/11/4.
//

#include <iostream>
using namespace std;

class R{
    public:
        R(int r1, int r2){
            R1 = r1;
            R2 = r2;
        }
        void print();
        void print() const;//const���ֳ�Ա���غ���

    private:
        int R1;
        int R2;
};

/*
����Ա����˵����ʽ������˵����  ��������������const;
���const�Ǻ������͵�һ����ɲ��֣������ʵ�ֲ���ҲҪ��const�ؼ��֡�
const�ؼ��ֿ��Ա����ڲ�������غ���������
ͨ��������ֻ�ܵ������ĳ���Ա����
*/

void R::print() {
    cout << "��ͨ����" << endl;
    cout << R1 << ";" << R2 << endl;
}

//ʵ����ҲҪ����const
void R::print() const {
    cout << "���������" << endl;
    cout << R1 << ";" << R2 << endl;
}

int main(){
    R a(1,2);
    a.print();//����void print
    //ͨ��������ֻ�ܵ������ĳ�Ա����
    const R b(3,4);
    b.print();
    system("pause");
    return 0;
}