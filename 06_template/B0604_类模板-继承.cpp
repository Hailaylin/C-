/**
 * @file B0604_类模板-继承.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-06-15
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：B0604        题目:类模板、继承2        得分：0  
  
作业提交截止时间：2021/6/27 0:00:00	 
 	
题目内容：
（1）定义一个类模板Base，保护段中有两个变量： a,b（变量类型相同）
（2）定义一个从Base类公有派生的普通类Derive类，增加一个与a,b不同类型的数据成员c，变量a,b均为float类型，c为int类型。
（3）Base类与Derive类均含有一个成员函数show()
（4）要求：所有成员函数均在类外定义。

 请注意，main()函数必须按如下所示编写：
int main()
{
    Base<int> bb(3,7);
    bb.show();

    Derive dd(3.14,2.72,5),dt;
    dd.show();
    dt.show();
    
    return 0;
}
 */
#include<iostream>
using namespace std;

template<typename T>
class Base{
    protected:
        T a,b;
    public:
        Base(T sa=0, T sb=0):a(sa),b(sb) {}
        void show();
};

template<class T>
void Base<T>::show(){
    cout << "Base a=" << a << ",b=" << b << endl;
}

class Derive:public Base<float>{
    protected:
        int c;
    public:
        Derive(float sa=3.3, float sb=4.4, int sc=5):Base(sa,sb) {c=sc;}
        void show();
};

void Derive::show(){
    cout << "Derive a=" << a << ",b=" << b << ",c=" << c << endl;
}

int main()
{
    Base<int> bb(3,7);
    bb.show();

    Derive dd(3.14,2.72,5),dt;
    dd.show();
    dt.show();
    
    return 0;
}