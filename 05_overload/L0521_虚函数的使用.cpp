/**
 * @file L0521_虚函数的使用.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0521        题目:虚函数的使用        得分：0  
  
作业提交截止时间：2021/7/23 0:00:00	 
 	
题目内容：
练习书上的例5.21，程序运行如下：
B0:print()
B1:B1:print()
B2:B2:print()
 请注意，main()函数必须按如下所示编写：

int main()
{
    B0 ob0, *op;
    op=&ob0;
    op->print("B0:");
    B1 ob1;
    op=&ob1;
    op->print("B1:");
    B2 ob2;
    op=&ob2;
    op->print("B2:");
        
    return 0;
}
 */
#include<iostream>
using namespace std;

class B0{
    public:
        virtual void print(const char *p){
            cout << p << "print()" << endl;
        }
};

class B1:public B0{
    public:
        virtual void print(const char *p){
            cout << p << "B1:print()" << endl;
        }
};

class B2:public B0{
    public:
        virtual void print(const char *p){
            cout << p << "B2:print()" << endl;
        }
};

int main()
{
    B0 ob0, *op;
    op=&ob0;
    op->print("B0:");
    B1 ob1;
    op=&ob1;
    op->print("B1:");
    B2 ob2;
    op=&ob2;
    op->print("B2:");
        
    return 0;
}