/**
 * @file 03_01-拷贝构造函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-09
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include<iostream>
using namespace std;
class Point{
    public:
        int x,y;
        Point(int x=0,int y=0);
        Point(const Point &p);
        void display();
        friend Point add(const Point a,const Point b); //这里还是void
};
Point::Point(int a,int b)//类外定义构造函数时不在指定参数的默认值
{   //形参和类内数据成员名字相同有歧义
    x=a;y=b;
    cout<<"Constructing...("<<x<<","<<y<<")"<<endl;
}
Point::Point(const Point &p)
{
    x=p.x;y=p.y;
    cout<<"Copy Constructing...("<<x<<","<<y<<")"<<endl;
}
void Point::display()
{
    cout<<"("<<x<<","<<y<<")"<<endl;
}

Point add(Point a,Point b)
{
    Point c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;
    return c;
}

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    Point p1(x1,y1),p2(x2,y2);
    Point p3;
    p3=add(p1,p2);//p3的值分别等于p1,p2的x,y值相加
    Point p4=p3;
    p4.display();
    return 0;
}