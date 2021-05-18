/**
 * @file L0509_运算符重载++.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-16
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0509        题目:运算符重载“++”        得分：0  
  
作业提交截止时间：2021/5/21 0:00:00	 
 	
题目内容：
练习书上例5.9，掌握用友元重载自增运算符的方法。
其中obj1与obj2的初始化参数从键盘上输入。
例：
（1）输入：1 2 3 4 5 6
a=1,b=2,c=3
a=2,b=3,c=4
a=3,b=4,c=5

a=4,b=5,c=6
a=5,b=6,c=7
a=6,b=7,c=8
 请注意，main()函数必须按如下所示编写：
int main()
{
    int a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    Three t1(a1,a2,a3),t2(b1,b2,b3);
    
    t1.print();
    ++t1;
    t1.print();
    t1++;
    t1.print();
    cout<<endl;
    t2.print();
    operator++(t2);
    t2.print();
    operator++(t2,0);
    t2.print();
    
    return 0;
}
 */
#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

class Three{
    private:
        int a, b, c;
    public:
        Three(int sa=0, int sb=0, int sc=0):a(sa),b(sb),c(sc) {}
        void print();
        //++前缀
        friend Three operator++(Three &);
        //++后缀
        friend Three operator++(Three &, int);
};

void Three::print(){
    cout << "a=" << a << ",b=" << b << ",c=" << c << endl;
}

Three operator++(Three &op){
    ++op.a; ++op.b; ++op.c;
    return op;
}

Three operator++(Three &op, int){
    op.a++; op.b++; op.c++;
    return op;
}


int main()
{
    int a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    Three t1(a1,a2,a3),t2(b1,b2,b3);
    
    t1.print();
    ++t1;
    t1.print();
    t1++;
    t1.print();
    cout<<endl;
    t2.print();
    operator++(t2);
    t2.print();
    operator++(t2,0);
    t2.print();
    
    return 0;
}