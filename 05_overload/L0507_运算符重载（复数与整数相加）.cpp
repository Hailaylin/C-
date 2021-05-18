/**
 * @file L0507_运算符重载（复数与整数相加）.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-16
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0507        题目:运算符重载（复数与整数相加）        得分：0  
  
作业提交截止时间：2021/5/20 0:00:00	 
 	
题目内容：
练习书上的例5.7，利用运算符重载函数实现一个复数与一个整数相加。
其中com1初始化的两个参数从键盘上输入。
例：
（1）输入：30 40
输出：
real=60,imag=40
real=80,imag=40
 请注意，main()函数必须按如下所示编写：
int main()
{
    double a,b;
    cin>>a>>b;
    Complex A1(a,b),A2;
    
    A2=A1+30;
    A2.print();
    A2=50+A1;
    A2.print();
}
 */

#include<iostream>
using namespace std;

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double r=0, double i=0):real(r),imag(i) {}
        friend Complex operator+(Complex com, int a){
            return Complex(com.real+a, com.imag);
        }
        friend Complex operator+(int a, Complex com){
            return Complex(a + com.real, com.imag);
        }
        void print();
};

void Complex::print(){
    cout << "real=" << real << ",imag=" << imag << endl;
}

int main()
{
    double a,b;
    cin>>a>>b;
    Complex A1(a,b),A2;
    
    A2=A1+30;
    A2.print();
    A2=50+A1;
    A2.print();
}
