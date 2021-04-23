/**
 * @file L0327_调用拷贝构造函数的3种情况.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0327        题目:调用拷贝构造函数的3种情况        得分：0  
  
作业提交截止时间：2021/4/24 0:00:00	 
 	
题目内容：
练习书上94页的例3.27，理解和掌握调用拷贝构造函数的3种情况。
由于DEVCPP对返回值为对象时拷贝函数的调用不支持。因此VC++和DEVCPP运行此程序的结果不同。
DEVCPP运行结果为：
Using normal constructor.
30 40
Using copy constructor.
60 80
Using copy constructor.
60 80
Using copy constructor.
60 80
Using normal constructor.
10 30

VC++6.0的运行结果为：
Using normal constructor.
30 40
Using copy constructor.
60 80
Using copy constructor.
60 80
Using copy constructor.
60 80
Using normal constructor.
Using copy constructor.
20 60
 */

#include<iostream>
using namespace std;

class Print{
    private:
        int x, y;
    public:
        Print(int a, int b);
        Print(const Print &p);
        void print(){
            cout << x << " " << y << endl;
        }
};

Print::Print(int a, int b){
    x=a;
    y=b;
    cout << "Using normal constructor.\n";
}

Print::Print(const Print &p){
    x=2*p.x;
    y=2*p.y;
    cout << "Using copy constructor.\n";
}

Print fun1(Print p){
    p.print();
}

Print fun2(){
    Print p4(10,30);
    return p4;
}

int main(){
    Print p1(30,40);
    p1.print();
    Print p2(p1);

    p2.print();
    Print p3=p1;

    p3.print();
    fun1(p1);
    p2=fun2();
    p2.print();
}

