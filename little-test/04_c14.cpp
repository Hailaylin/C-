/**
 * @file 04_c14.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-16
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */
#include<iostream>
using namespace std;

class A{
    public:
        A(){cout << "A";}
};

class B {
    public:
        B() {cout << "B";}
        void show(){
            cout << "showB" << endl;
        }
};

class C:public B {
    //B b;
    public:
        C() {cout << "C";}
        void show(){
            cout << "showC" << endl;
        }
};

int main(){
    C obj ; obj.show();
}