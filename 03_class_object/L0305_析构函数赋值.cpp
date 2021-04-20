/*
题号：L0305        题目:建立对象同时，采用构造函数给数据成员赋初值        得分：0  
  
作业提交截止时间：2021/4/16 0:00:00	 
 	
题目内容：
例3.5，其中构造函数的参数从键盘上输入。
例：
（1）输入：1.1 2.2 输出：2.45967
*/

#include<iostream>
#include<cmath>
using namespace std;

class Complex{
    public:
        Complex(double r, double i){
            real = r;
            imag = i;
        }
        double abscomplex(){
            double t;
            t = real*real + imag*imag;
            return sqrt(t);
        }
    private:
        double real;
        double imag;
};

int main(){
    double r, i;
    cin >> r >> i;
    Complex a(r,i);
    cout << a.abscomplex();
}