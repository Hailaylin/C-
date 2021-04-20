/**
 * @file L0316_用带有多个参数的构造函数给对象数组赋值.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0316        题目:用带有多个参数的构造函数给对象数组赋值        得分：0  
  
作业提交截止时间：2021/4/21 0:00:00	 
 	
题目内容：
练习书上77-78页例3.16，其中对象com[0]的参数从键盘上输入。
例：
（1）输入：
1.1 
2.2
输出：
2.4597
5.5000
8.5913
Destructor called.
Destructor called.
Destructor called.
 */

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class Complex{
    private:
        double real;
        double imag;
    public:
        Complex(double r=0.0, double i=0.0):real(r),imag(i)
        {   }
        ~Complex();
        double abscomplex();
};

Complex::~Complex(){
    cout << "Destructor called." << endl;
}

double Complex::abscomplex(){
    return sqrt(real*real + imag*imag);
}

int main()
{
    double r, i;
    cin >> r >> i;
    Complex com[3]={
        Complex(r,i),
        Complex(3.3,4.4),
        Complex(5.5,6.6)
    };
    for(int i=0; i<3; i++){
        cout << fixed << setprecision(4) << com[i].abscomplex() << endl;
    }
}