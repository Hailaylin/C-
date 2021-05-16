/**
 * @file L0506_成员函数重载++.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-16
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0506        题目:成员函数重载“++”(前缀)        得分：0  
  
作业提交截止时间：2021/5/20 0:00:00	 
 	
题目内容：
练习书上的例5.6，掌握用成员函数重载自增（自减）运算符的方法。
其中ob的初始化参数从键盘上输入。
例：
（1）输入：10 20
输出：
x=10,y=20
x=11,y=21
x=12,y=22
x=13,y=23
x=13,y=23
 请注意，main()函数必须按如下所示编写：
int main()
{
    int x,y;
    cin>>x>>y;
    Coord ob(x,y);
    
    ob.print();
    ++ob;
    ob.print();
    
    ob.operator++();
    ob.print();
    
    Coord ob2;
    ob2=++ob;
    ob2.print();
    ob.print();
    
    return 0;
}
 */

#include<iostream>
using namespace std;

class Coord {
    private:
        int x, y;
    public:
        Coord(int x1=0, int y1=0):x(x1),y(y1) {}
        void print();
        Coord operator++();
};

Coord Coord::operator++(){
    ++x;
    ++y;
    return *this;
}

void Coord::print(){
    cout << "x=" << x << ",y=" << y << endl;
}

int main()
{
    int x,y;
    cin>>x>>y;
    Coord ob(x,y);
    
    ob.print();
    ++ob;
    ob.print();
    
    ob.operator++();
    ob.print();
    
    Coord ob2;
    ob2=++ob;
    ob2.print();
    ob.print();
    
    return 0;
}