/**
 * @file L0419_基类与派生对象之间的转换.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-14
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0419        题目:基类与派生类对象之间的转换        得分：0  
  
作业提交截止时间：2021/5/16 0:00:00	 
 	
题目内容：
练习书上的例4.19，了解：声明为指向基类对象的指针可以指向它的公有派生的对象，但不允许指向它的私有派生类对象。

 请注意，main()函数必须按如下所示编写：
int main()
{
    Base b1(200);
    b1.show();
    Derived d1(11);
    b1=d1;
    b1.show();
    Derived d2(22);
    Base &b2=d2;
    b2.show();
    Derived d3(33);
    Base *b3=&d3;
    b3->show();
    Derived d4(77);
    fun(d4);
    
    return 0;
}


请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                     
 */

#include<iostream>
#include<string>
using namespace std;

class Base{
    public:
        int i;
        Base(int x){
            i=x;
        }
        void show(){
            cout << "Base " << i << endl;
        }
};

class Derived:public Base{
    public:
        Derived(int x):Base(x) {}
};

void fun(Base &bb){
    cout << bb.i << endl;
}

int main()
{
    Base b1(200);
    b1.show();
    Derived d1(11);
    b1=d1;
    b1.show();
    Derived d2(22);
    Base &b2=d2;
    b2.show();
    Derived d3(33);
    Base *b3=&d3;
    b3->show();
    Derived d4(77);
    fun(d4);
    
    return 0;
}