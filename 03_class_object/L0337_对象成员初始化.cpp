/**
 * @file L0337_对象成员初始化.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0337        题目:对象成员的初始化        得分：0  
  
作业提交截止时间：2021/5/6 0:00:00	 
 	
题目内容：
练习并修改书上114页的例3.37，创建构造函数与析构函数，添加揭示信息。
理解和掌握对象成员的初始化，具有对象成员的类对象的构造函数与析构函数调用顺序。
使程序运行如下图所示：
 */

#include<iostream>
using namespace std;

class A{
    private:
        int x;
        float y;
    public:
        A(int x1, float y1):x(x1),y(y1) {
            cout << "Constructing A..." << endl;
        };
        ~A(){
            cout << "Destructing A..." << endl;
        }
        void show(){
            cout << "x=" << x << ",y=" << y <<endl;
        }
};

class B{
    private:
        A a;
        int z;
    public:
        B(int x1, float y1, int z1):a(x1, y1){
            z=z1;
            cout << "Constructing B..." << endl;
        }
        ~B(){
            cout << "Destructing B..." << endl;
        }
        void show(){
            a.show();
            cout << "z=" << z << endl;
        }
};

int main(){
    B b(1,2,3);
    b.show();
}