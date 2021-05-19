/**
 * @file L0517_类型转换函数的应用2.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0517        题目:类型转换函数的应用2        得分：0  
  
作业提交截止时间：2021/5/22 0:00:00	 
 	
题目内容：
练习书上的例5.17，其中com1与com2的初始化参数从键盘上输入。
例：
（1）输入：22.2 4.4 66.6 4.4
输出：
Complex-->double:22.2
Complex-->int:66
 请注意，main()函数必须按如下所示编写：
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    
    Complex com1(a,b);
    cout<<"Complex-->double:";
    cout<<double(com1)<<endl;
    Complex com2(c,d);
    cout<<"Complex-->int:";
    cout<<int(com2)<<endl;
    
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
        operator int(){
            return int(real);
        }
};

int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    
    Complex com1(a,b);
    cout<<"Complex-->double:";
    cout<<double(com1)<<endl;
    Complex com2(c,d);
    cout<<"Complex-->int:";
    cout<<int(com2)<<endl;
    
    return 0;
}