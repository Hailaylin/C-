/**
 * @file B0603_类模板、继承.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：B0603        题目:类模板、继承        得分：0  
  
作业提交截止时间：2021/7/24 0:00:00	 
 	
题目内容：
（1）定义一个类模板Base，保护段中有两个变量： a,b（变量类型相同）
（2）定义一个从Base类公有派生的普通类Derive类，增加一个与a,b同类型的数据成员c，这3个变量均为float类型
（3）Base类与Derive类均含有一个成员函数show()
（4）要求：所有成员函数均在类外定义。

运行结果如下所示：
Base a=3,b=7
Derive a=3.14,b=2.72,c=5.5
Derive a=3.3,b=4.4,c=5.5
 请注意，main()函数必须按如下所示编写：
int main()
{
    Base<int> bb(3,7);
    bb.show();

    Derive dd(3.14,2.72),dt;
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
        T a, b;
    public:
        Base(T a1, T b1):a(a1),b(b1) {}
        virtual void show();
};

template<typename T>
void Base<T>::show(){
    cout << "Base a=" << a << ",b=" << b << endl;
}


class Derive : public Base<float> {
    private:
        float c;
    public:
        Derive(float a1=3.3, float b1=4.4):Base(a1,b1) {
            c = 5.5;
        }
        void show();
};


void Derive::show(){
    cout << "Derive a=" << a << ",b=" << b << ",c=" << c << endl;
}

int main()
{
    Base<int> bb(3,7);
    bb.show();

    Derive dd(3.14,2.72),dt;
    dd.show();
    dt.show();
    
    return 0;
}