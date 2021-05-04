/**
 * @file L0407_简单派生类的构造与析构.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-02
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0407        题目:简单派生类的构造与析构        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上例4.7，掌握简单派生类的构造函数与析构函数的执行顺序。

 请注意，main()函数必须按如下所示编写：
int main()
{
    B b;
    return 0;
} 


请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                     	 
 */

#include<iostream>
using namespace std;

class A {
    public:
        A() {
            cout << "Contructing class A." << endl;
        }
        ~A() {
            cout << "Destructing class A." << endl;
        }
};

class B:public A {
    public:
        B() {
            cout << "Contructing class B." << endl;
        }
        ~B() {
            cout << "Destructing class B." << endl;
        }
};

int main(){
    B b;
}