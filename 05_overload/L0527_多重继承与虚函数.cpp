/**
 * @file L0527_多重继承与虚函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0527        题目:多重继承与虚函数        得分：0  
  
作业提交截止时间：2021/7/23 0:00:00	 
 	
题目内容：
练习书上的例5.27，理解多重继承中虚函数的作用。
程序运行结果如下：
--Derived--
--Base2--
 */

#include<iostream>
using namespace std;

class Base1{
    public:
        virtual void fun(){
            cout << "--Base1--" << endl;
        }
};

class Base2{
    public:
        void fun(){
            cout << "--Base2--" << endl;
        }
};

class Derived : public Base1, public Base2 {
    public:
        void fun(){
            cout << "--Derived--" << endl;
        }
};

int main(){
    Base1 *ptr1;
    Base2 *ptr2;
    Derived ob;
    
    ptr1=&ob;
    ptr1->fun();

    ptr2=&ob;
    ptr2->fun();
}