/**
 * @file L0526_虚函数与重载函数的关系.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0526        题目:虚函数与重载函数的关系        得分：0  
  
作业提交截止时间：2021/7/23 0:00:00	 
 	
题目内容：
理解什么是虚函数，什么是重载函数，它们的不同点？
练习书上例5.26，程序运行结果如下：
--Derived func1--
--Base func2--
--Base func4--
 请注意，main()函数必须按如下所示编写：
int main()
{
    Base d1,*bp;
                 Derived d2;
                 bp=&d2;
                 bp->func1();
                 bp->func2();
                 bp->func4();
    return 0;
}
 */
#include<iostream>
using namespace std;

class Base {
    public:
        virtual void func1();
        virtual void func2();
        //virtual void func3();
        void func4();
};

class Derived : public Base {
    public:
        virtual void func1();
        void func2(int x);  //参数改变，虚函数特性消失
        //char func3(); //不删编译报错error: conflicting return type specified for 'virtual char Derived::func3()'
        //note: overridden function is 'virtual void Base::func3()'
        //virtual void func3();
        //char func3();
        void func4();
};

void Base::func1(){
    cout << "--Base func1--" << endl;
}

void Base::func2(){
    cout << "--Base func2--" << endl;
}

/* void Base::func3(){
    cout << "--Base func3--" << endl;
} */

void Base::func4(){
    cout << "--Base func4--" << endl;
}

void Derived::func1(){
    cout << "--Derived func1--" << endl;
}

void Derived::func2(int x){
    cout << "--Derived func2--" << endl;
}

/* char Derived::func3(){
    cout << "--Derived func3--" << endl;
}
 */
void Derived::func4(){
    cout << "--Derived func4--" << endl;
}

int main()
{
    Base d1,*bp;
    Derived d2;
    bp=&d2;
    bp->func1();
    bp->func2();
    //bp->func3();
    bp->func4();
    return 0;
}