/**
 * @file L0506B_用成员函数重载运算符++后缀.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-16
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0506B        题目:用成员函数重载运算符（++ 后缀）        得分：0  
  
作业提交截止时间：2021/5/20 0:00:00	 
 	
题目内容：
掌握用成员函数重载自增（后缀）运算符的方法。
例：
（1）输入：10 20
输出：
x=10,y=20
x=10,y-20
x=11,y=21
 请注意，main()函数必须按如下所示编写：
int main()
{
    int x,y;
    cin>>x>>y;
    Coord ob(x,y);
    
    ob.print();
    
    Coord ob2;
    ob2=ob++;
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
        Coord operator++(int);
};

Coord Coord::operator++(int){
    Coord temp(*this);
    //cout << &temp << endl; //返回0x61fdc8
    x++;
    y++;
    //cout << this << endl; //返回0x61fe10 同样是this指针，指向了不同对象
    return temp;
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
    
    Coord ob2;
    ob2=ob++;
    ob2.print();
    ob.print();
    
    return 0;
}