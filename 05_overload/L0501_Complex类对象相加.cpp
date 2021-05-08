/**
 * @file L0501_Complex类对象相加.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-08
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0501        题目:Complex类对象相加        得分：0  
  
作业提交截止时间：2021/7/23 0:00:00	 
 	
题目内容：
练习书上的例5.1，要求对象com1与com2的两个参数从键盘上输入。
例：
（1）输入：1 2 3 4
输出：
real1=4 imag1=6
real2=4 imag2=6

（2）输入：1.1 2.2 3.3 4.4
输出：
real1=4.4 imag1=6.6
real2=4.4 imag2=6.6
 */

#include<iostream>
using namespace std;

class Complex{
    public:
        double real;
        double imag;
        Complex(double r=0, double i=0):real(r),imag(i) {}
};

Complex operator+(const Complex &a, const Complex &b){
    Complex tmp;
    tmp.real=a.real+b.real;
    tmp.imag=a.imag+b.imag;
    return tmp;
}

int main(){
    double a,b, c,d;
    cin >> a >> b >> c >> d;
    Complex com1(a,b), com2(c,d), total1, total2;
    total1=operator+(com1,com2);
    cout << "real1=" << total1.real << " " << "imag1=" << total1.imag << endl;
    total2=com1+com2;
    cout << "real2=" << total2.real << " " << "imag2=" << total2.imag << endl;
}