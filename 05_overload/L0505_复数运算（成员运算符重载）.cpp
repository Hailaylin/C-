/**
 * @file L0505_复数运算（成员运算符重载）.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-14
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0505        题目:复数运算（成员运算符重载）        得分：0  
  
作业提交截止时间：2021/5/20 0:00:00	 
 	
题目内容：
练习书上例5.5，分析用成员运算符重载运算符与用友元重载运算符的区别。
其中对象A1与A2的初始化值从键盘上输入。
例：
（1）输入：1 2 3 4
输出：
1+2i
3+4i
4+6i
-2-2i
-5+10i
0.44+0.08i
（2）输入：5 6 5 6
输出：
5+6i
5+6i
10+12i
0
-11+60i
1

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

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                     
 */
#include<iostream>
using namespace std;

class Complex{
    private:    
        double real;
        double imag;
    public:
        Complex(double r=0, double i=0):real(r),imag(i) {}
        //+
        Complex operator+(Complex &a){
            return Complex(real+a.real, imag+a.imag);
        }
        //-
        Complex operator-(Complex &a){
            return Complex(real-a.real, imag-a.imag);
        }
        // * 它的乘法除法太复杂，得单独算
        Complex operator*(Complex &a);
        // /
        Complex operator/(Complex &a);
        void print();
};

Complex Complex::operator*(Complex &a){
    Complex tmp;
    tmp.real=real*a.real-imag*a.imag;
    tmp.imag=real*a.imag+imag*a.real;
    return tmp;
}

Complex Complex::operator/(Complex &a){
    Complex tmp;
    double t = 1/(a.real*a.real+a.imag*a.imag);
    tmp.real=(real*a.real+imag*a.imag)*t;
    tmp.imag=(a.real*imag-real*a.imag)*t;
    return tmp;
}

void Complex::print(){
    //0、1的情况输出real, imag==0则不输出
    if (0==imag){
        cout << real << endl;
    }
    //>0 "+" 加上
    else if (imag>0){
        cout << real << "+" << imag << "i" << endl;
    }
    //负数不加"+"
    else{
        cout << real << imag << "i" << endl;
    }
}

//test
/* int main(){
    Complex a(2,1), b(1,2);
    Complex c=a+b;
    c.print();
} */

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