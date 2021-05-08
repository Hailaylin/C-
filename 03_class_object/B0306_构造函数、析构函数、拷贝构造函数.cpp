/**
 * @file B0306_构造函数、析构函数、拷贝构造函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-08
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 *        C++与面向对象程序设计	 
题号：B0306        题目:构造函数、析构函数、拷贝构造函数        得分：0  
  
作业提交截止时间：2021/5/16 0:00:00	 
 	
题目内容：
下列程序涉及到构造函数、析构函数、拷贝构造函数、友元。
请将程序补充完整。
（1）输入：1 2 3 4
输出：
Point(1,2)
Point(3,4)
copy Point(3,4)
copy Point(1,2)
x=1,y=2
x=3,y=4
~Point():1,2
~Point():3,4
~Point():3,4
~Point():1,2
 请注意，main()函数必须按如下所示编写：
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    Point p1(a,b),p2(c,d);
    show(p1,p2);  //友元函数

    return 0;
}
 */
#include<iostream>
using namespace std;

class Point{
    private:
        int a, b;
    public:
        Point(int sa, int sb):a(sa),b(sb) {
            printf("Print(%d,%d)\n", a,b);
        }
        Point(const Point &p){
            printf("copy Point(%d,%d)\n", p.a, p.b);
        }
        ~Point(){
            printf("~Point():%d,%d\n", a,b);
        }
        friend void show(Point &, Point &);
};

void show(Point & p1, Point &p2){
    printf("x=%d,y=%d\n", p1.a, p1.b);
    printf("x=%d,y=%d\n", p2.a, p2.b);
}

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    Point p1(a,b),p2(c,d);
    show(p1,p2);  //友元函数

    return 0;
}

