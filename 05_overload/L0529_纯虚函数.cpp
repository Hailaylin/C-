/**
 * @file L0529_纯虚函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0529        题目:纯虚函数        得分：0  
  
作业提交截止时间：2021/7/23 0:00:00	 
 	
题目内容：
练习书上例5.29，了解什么是纯虚函数和它的作用。
程序运行结果如下：
The circle's area is 314
The circle's circumference is 62.8
 请注意，main()函数必须按如下所示编写：
int main()
{
    Circle *ptr;
    Area ob1;
    Perimeter ob2;
    
    ob1.setr(10);
    ob2.setr(10);
    ptr=&ob1;
    ptr->show();
    ptr=&ob2;
    ptr->show();
    
    return 0;
}
 */
#include<iostream>
using namespace std;

class Circle{
    protected:
        int r;
    public:
        void setr(int x){
            r=x;
        }
        virtual void show() =0; //纯虚函数
};

class Area : public Circle{
    public:
        void show(){
            cout << "The circle's area is " 
                 << r*r*3.14 << endl;
        }
};

class Perimeter : public Circle {
    public:
        void show(){
            cout << "The circle's circumference is "
                 << 2*3.14*r << endl;
        }
};

int main()
{
    Circle *ptr;
    Area ob1;
    Perimeter ob2;
    
    ob1.setr(10);
    ob2.setr(10);
    ptr=&ob1;
    ptr->show();
    ptr=&ob2;
    ptr->show();
    
    return 0;
}