/**
 * @file L0528_多态性.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0528        题目:多态性        得分：0  
  
作业提交截止时间：2021/7/23 0:00:00	 
 	
题目内容：
应用多态性，计算三角形、矩形和圆的面积。
程序运行结果如下：
Triangle height:10,base:6,area:30
Rectangle length:10,width:6,area:60
Circle ridius:10,area:314.16
 */

#include<iostream>
using namespace std;

class Figure{
    protected:
        double x;
        double y;
    public:
        Figure(double sx, double sy):x(sx),y(sy) {}
        virtual void area(){
            cout << "基类的公有接口." << endl;
        }
};

class Triangle : public Figure{
    public:
        Triangle(double hight, double base):Figure(hight, base) {} //输入高和底
        virtual void area(){
            cout << "Triangle height:" << x
                 << ",base:" << y
                 << ",area:" << (x*y)/2 << endl;
        } 
};

class Square : public Figure {
    public:
        Square(double length, double width):Figure(length, width) {}
        virtual void area(){
            cout << "Rectangle length:" << x
                 << ",width:" << y
                 << ",area:" << x*y << endl;
        } 
};

class Circle:public Figure{
    public:
        Circle(double ridius):Figure(ridius,ridius) {}
        void area(){
            cout << "Circle ridius:" << x
                 << ",area:" << 3.1416*x*y << endl;
        } 
};

int main(){
    Figure *ptr;
    Triangle t(10.0, 6.0);
    Square s(10.0, 6.0);
    Circle c(10.0);

    ptr=&t;
    ptr->area();

    ptr=&s;
    ptr->area();

    ptr=&c;
    ptr->area();
}