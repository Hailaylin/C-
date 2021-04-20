/*
	题号：L0312        题目:带默认参数的构造函数        得分：0  
  
作业提交截止时间：2021/4/21 0:00:00	 
 	
题目内容：
练习书上的例3.12，要求s3的两个参数从键盘上输入。
后面两个复数模的输出保留4位小数（保留小数输出如下所示）。
cout << setprecision (4);   
cout.setf(ios::fixed); 
cout<<a<<endl; 
需要加上：#include <iomanip>
例：
（1）输入： 1.1 2.2
输出：
0
1.1000
2.4597

（2）输入：3 4
输出：
0
1.1000
5.0000
*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

class Complex{
    private:
        double real;
        double imag;
    public:
        Complex(double r=0, double i=0):real(r),imag(i)
        {   }
        double abscomplex();
};

double Complex::abscomplex(){
    return sqrt(real * real + imag * imag);
}

int main(){
    double real, imag;
    cin >> real >> imag;
    Complex S1;
    cout <<  S1.abscomplex() << endl;
    Complex S2(1.1);
    cout <<  fixed << setprecision(4) << S2.abscomplex() << endl;
    Complex S3(real, imag);
    cout <<  fixed << setprecision(4) << S3.abscomplex() << endl;
}
