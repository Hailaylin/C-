/**
 * @file L0514_转换构造函数引例.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0514        题目:转换构造函数引例        得分：0  
  
作业提交截止时间：2021/5/22 0:00:00	 
 	
题目内容：
练习例5.14，理解为什么使用转换构造函数。
其中com1与com2的初始化参数从键盘上输入。
例：
（1）输入：1.1 2.2 3.3 4.4
输出：4.4+6.6i
 请注意，main()函数必须按如下所示编写：
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    Complex com1(a,b),total;
    Complex com2(c,d);
    total=com1+com2;
    total.print();
    
    return 0;
}
 */

/* #include<iostream>
using namespace std;

int main(){
    double a=1.2;
    cout << a << endl;
    cout << ++a << endl;
    cout << a++ << endl;
    cout << a << endl;
} */

#include<iostream>
using namespace std;

class Complex{
    private:
        double real;
        double imag;
    public:
        Complex(double r=0.0, double i=0.0):real(r),imag(i) {}
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
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    Complex com1(a,b),total;
    Complex com2(c,d);
    total=com1+com2;
    total.print();
    
    return 0;
}