/*
题号：L0318        题目:this指针（1）        得分：0  
  
作业提交截止时间：2021/7/18 0:00:00	 
 	
题目内容：
练习书上81页例3.18，理解this指针的作用。
*/

#include<iostream>
using namespace std;

class A{
    private:
        int x;
    public:
        A(int a) {
            x=a;
        }
        void disp(){
            cout << "x=" << this->x << endl;
        }
};

int main(){         //main写成mian
    A a(1), b(2);
    cout << "a:";
    a.disp();
    cout << "b:";
    b.disp();
    return 0;
}