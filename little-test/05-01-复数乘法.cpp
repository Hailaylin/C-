/**
 * @file 05-01-复数乘法.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    friend Complex operator*(Complex &a, Complex &b);
    void print();
};

Complex operator*(Complex &a, Complex &b)
{
    Complex temp;
    temp.real = a.real * b.real - a.imag * b.imag;
    temp.imag = a.real * b.imag + a.imag * b.real;
    return temp;
}

void Complex::print(){
    printf("(");
    if(real!=0){    //real!=0的情况
        cout << real;
        if(imag!=0){
            if(imag>0) printf("+"); //imag为+就加个+号
            cout << imag << "i";    //负数原样输出
        }
        //imag==0不输出
    }
    else {  //real==0的情况
        if (imag!=0) cout << imag << "i"; //imag不为0
        else printf("0");                 //imag==0的情况
    }
    printf(")");
}

int main()
{
    double a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    Complex A1(a1, a2), A2(b1, b2), A3;

    A3 = A1 * A2;
    A1.print();
    cout << "*";
    A2.print();
    cout << "=";
    A3.print();
}