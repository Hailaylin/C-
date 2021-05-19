/**
 * @file L0516_类型转换函数的应用1.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0516        题目:类型转换函数的应用1        得分：0  
  
作业提交截止时间：2021/5/22 0:00:00	 
 	
题目内容：
练习书上的例5.16，理解类型转换函数的作用。
程序运行如下所示：
Complex-->double
2.2
 请注意，main()函数必须按如下所示编写：
int main()
{
    Complex com1(2.2,4.4);
    cout<<"Complex-->double"<<endl;
    cout<<double(com1)<<endl;
    
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
        Complex(double r=0, double i=0):real(r),imag(i) {}
        operator double(){
            return real;
        }
};

int main()
{
    Complex com1(2.2,4.4);
    cout<<"Complex-->double"<<endl;
    cout<<double(com1)<<endl;
    
    return 0;
}