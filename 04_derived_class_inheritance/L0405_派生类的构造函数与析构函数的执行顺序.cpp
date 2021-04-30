/**
 * @file L0405_派生类的构造函数与析构函数的执行顺序.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0405        题目:派生类的构造函数与析构函数的执行顺序        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上的例4.5，掌握派生类（包括基类）的构造函数与析构函数的执行顺序。
 请注意，main()函数必须按如下所示编写：
int main()
{
    Derived obj;
    return 0;
} 

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。  
 */
#include<iostream>
using namespace std;

class Base {
    public:
        Base(){
            cout << "Constructing base class" << endl;
        }
        ~Base(){
            cout << "Destructing base class" << endl;
        }
};

class Derived:public Base {
    public:
        Derived() {
            cout << "Constructing derived class" << endl;
        }
        ~Derived() {
            cout << "Destructing derived class" << endl;
        }
};

int main()
{
    Derived obj;
    return 0;
} 