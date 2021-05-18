/**
 * @file L0508_运算符重载“--”.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-16
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0508        题目:运算符重载“--”        得分：0  
  
作业提交截止时间：2021/5/21 0:00:00	 
 	
题目内容：
练习书上的例5.8，其中obj1也obj2的初始化参数从键盘输入。
掌握前缀与后缀方式重载自减运算符的方法。
例：
（1）输入：1 2 3 4 5 6
输出：
a=1,b=2,c=3
a=0,b=1,c=2
a=0,b=1,c=2
a=-1,b=0,c=1

a=4,b=5,c=6
a=3,b=4,c=5
a=3,b=4,c=5
a=2,b=3,c=4
 请注意，main()函数必须按如下所示编写：
int main()
{
    int a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    Three t1(a1,a2,a3),t2,t3(b1,b2,b3),t4;
    
    t1.print();
    --t1;
    t1.print();
    t2=t1--;
    t2.print();
    t1.print();
    cout<<endl;
    t3.print();
    t3.operator--();
    t3.print();
    t4=t3.operator--(0);
    t4.print();
    t3.print();
    
    return 0;
}

 */
#include<iostream>
using namespace std;

class Three{
    private:
        int a, b, c;
    public:
        Three(int sa=0, int sb=0, int sc=0):a(sa),b(sb),c(sc) {}
        void print();
        //--前缀
        Three operator--();
        //--后缀
        Three operator--(int);
};

void Three::print(){
    cout << "a=" << a << ",b=" << b << ",c=" << c << endl;
}

Three Three::operator--(){
    --a; --b; --c;
    return *this;
}

Three Three::operator--(int){
    Three temp(*this);
    --a; --b; --c;
    return temp;
}

int main()
{
    int a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    Three t1(a1,a2,a3),t2,t3(b1,b2,b3),t4;
    
    t1.print();
    --t1;
    t1.print();
    t2=t1--;
    t2.print();
    t1.print();
    cout<<endl;
    t3.print();
    t3.operator--();
    t3.print();
    t4=t3.operator--(0);
    t4.print();
    t3.print();
    
    return 0;
}