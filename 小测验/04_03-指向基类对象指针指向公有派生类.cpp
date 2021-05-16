/**
 * @file 04_03-指向基类对象指针指向公有派生类.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-16
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include<iostream>
#include<string>
using namespace std;

class Base{
    protected:
        int x;
        int y;
    public:
        Base(int x1, int y1):x(x1),y(y1) {
            printf("Base(%d,%d)\n", x, y);
        }
        void show(){
            cout << "Base: x=" << x << "," << "y=" << y << endl;
        }
};

class Derive:public Base{
    public:
        Derive(int x1, int y1):Base(x1,y1) {
            printf("Derive(%d,%d)\n", x, y);
        }
        void show(){
            cout << "Derive: x=" << x << "," << "y=" << y << endl;
        }
};

//class derived :: Derive private{};

int main(){
    Base b(3,5), *p;
    Derive d(6,8);
    p=&b;
    p->show();
    p=&d;
    p->show();
    d.show();
    return 0;
}