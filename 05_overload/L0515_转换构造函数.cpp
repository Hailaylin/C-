/**
 * @file L0515_转换构造函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0515        题目:转换构造函数        得分：0  
  
作业提交截止时间：2021/5/22 0:00:00	 
 	
题目内容：
练习书上的例5.15，掌握转换构造函数定义与应用。
其中com1与com2的初始化参数从键盘上输入。
例：
（1）输入：1.1 2.2 7.7
输出：8.8+2.2i
 请注意，main()函数必须按如下所示编写：
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    Complex com1(a,b),total;
    Complex com2(c);
    total=com1+com2;
    total.print();
    
    return 0;
}
 */
#include<iostream>
using namespace std;

class Complex{
    private:
        double real;
        double imag;
    public:
        Complex(){real = 0.0; imag = 0.0;}
        Complex(double r, double i):real(r),imag(i) {}
        Complex(double sr) { real = sr; imag = 0.0;}
        friend Complex operator+(const Complex & , const Complex &);
        void print();
};

Complex operator+(const Complex & a, const Complex &b){
    return Complex(a.real+b.real, a.imag+b.imag);
}

void Complex::print(){
    cout << real;
    if(imag>0) cout << "+";
    if(imag!=0) cout << imag << "i" << endl;
}

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    Complex com1(a,b),total;
    Complex com2(c);
    total=com1+com2;
    total.print();
    
    return 0;
}