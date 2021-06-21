/**
 * @file B0605_类模板.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-06-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：B0605        题目:类模板3        得分：0  
  
作业提交截止时间：2021/6/27 0:00:00	 
 	
题目内容：
（1）定义一个类模板Base，保护段中有两个变量： a,b（变量类型不同）
（2）定义一个从Base类公有派生的普通类Derive类，增加一个数据成员c，变量a为float类型，b与c为int类型。
（3）Base类与Derive类均含有一个成员函数show()
（4）要求：所有成员函数均在类外定义。

 请注意，main()函数必须按如下所示编写：
int main()
{
    Base<int,int> aa(1,2);
    aa.show();
    Base<int,float> bb(3,7.7);
    bb.show();
    Base<float, char> cc(3.3,'T');
    cc.show();
    

    Derive dd(3.14,2,5),dt;
    dd.show();
    dt.show();
    
    return 0;
}
 */

#include<iostream>

using namespace std;

template<class T1, typename T2>
class Base{
    protected:
        T1 a;
        T2 b;
    public:
        Base(T1 sa, T2 sb):a(sa),b(sb) {}
        void show();
};

class Derive:public Base<float,float>{
    private:
        int c;
    public:
        Derive(float sa=3.3, float sb=4, int sc=5):Base(sa,sb) {c=sc;}        
        void show();
};

template<typename T1, typename T2>
void Base<T1,T2>::show(){
    cout << "Base a=" << a << ",b=" << b << endl;
}

void Derive::show(){
    cout << "Derive a=" << a << ",b=" << b << ",c=" << c << endl;
}

int main()
{
    Base<int,int> aa(1,2);
    aa.show();
    Base<int,float> bb(3,7.7);
    bb.show();
    Base<float, char> cc(3.3,'T');
    cc.show();
    

    Derive dd(3.14,2,5),dt;
    dd.show();
    dt.show();
    
    return 0;
}
