/**
 * @file L0502_复数运算.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-08
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0502        题目:复数运算        得分：0  
  
作业提交截止时间：2021/7/23 0:00:00	 
 	
题目内容：
练习书上的例5.2，其中对象A1、A2的参数从键盘上输入。
例：
（1）输入：1 2 3 4
输出：
1+2i
3+4i
4+6i
-2-2i
-5+10i
0.44+0.08i

 请注意，main()函数必须按如下所示编写：
int main()
{
    double a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    Complex A1(a1,a2),A2(b1,b2),A3,A4,A5,A6;
    A3=A1+A2;
    A4=A1-A2;
    A5=A1*A2;
    A6=A1/A2;
    A1.print();
    A2.print();
    A3.print();
    A4.print();
    A5.print();
    A6.print(); 
       return 0;
}

 */

#include<iostream>
using namespace std;

class Complex{
    public:
        double real;
        double imag;
        Complex(double r=0, double i=0):real(r),imag(i) {}
        void print();
        friend Complex operator+(const Complex &a, const Complex &b);
        friend Complex operator-(const Complex &a, const Complex &b);
        friend Complex operator*(const Complex &a, const Complex &b);
        friend Complex operator/(const Complex &a, const Complex &b);
};

Complex operator+(const Complex &a, const Complex &b){
    Complex tmp;
    tmp.real=a.real+b.real;
    tmp.imag=a.imag+b.imag;
    return tmp;
}

Complex operator-(const Complex &a, const Complex &b){
    Complex tmp;
    tmp.real=a.real-b.real;
    tmp.imag=a.imag-b.imag;
    return tmp;
}

Complex operator*(const Complex &a, const Complex &b){
    Complex tmp;
    tmp.real=a.real*b.real-a.imag*b.imag;
    tmp.imag=a.real*b.imag+a.imag*b.real;
    return tmp;
}

Complex operator/(const Complex &a, const Complex &b){
    Complex tmp;
    double t=1/(b.real*b.real+b.imag*b.imag);
    tmp.real=(a.real*b.real+a.imag*b.imag)*t;
    tmp.imag=(b.real*a.imag-a.real*b.imag)*t;
    return tmp;
}

void Complex::print(){
    cout << real;
    if (imag > 0) cout << "+";
    if (imag != 0) cout << imag << 'i' << endl;
}

int main(){
    double a,b, c,d;
    cin >> a >> b >> c >> d;
    Complex A1(a,b), A2(c,d), A3, A4, A5, A6;
    A3=A1+A2;
    A4=A1-A2;
    A5=A1*A2;
    A6=A1/A2;
    A1.print();
    A2.print();
    A3.print();
    A4.print();
    A5.print();
    A6.print();
    return 0;
}