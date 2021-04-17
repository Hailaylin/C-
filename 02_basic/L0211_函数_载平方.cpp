/*
题号：L0211        题目:函数重载：平方        得分：0  
  
作业提交截止时间：2021/4/12 0:00:00	 
 	
题目内容：
练习例2.11，计算整数、实数的平方。
例：
（1）输入：2  3.3
输出：
2*2=4
3.3*3.3=10.89
*/

#include<iostream>
using namespace std;

int square(int x){
    return x*x;
}

double square(double x){
    return x*x;
}

int main()
{
    int a;
    double b;
    cin>>a>>b;
    cout<<a<<"*"<<a<<"="<<square(a)<<endl;
    cout<<b<<"*"<<b<<"="<<square(b)<<endl;
}