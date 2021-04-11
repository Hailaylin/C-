/*
	题号：L0212        题目:函数重载：乘积        得分：0  
  
作业提交截止时间：2021/4/12 0:00:00	 
 	
题目内容：
练习书上例2.12，计算两个数与三个数的乘积。
例：（1）输入：2 3 4
输出：
2*3=6
2*3*4=24
*/

#include<iostream>
using namespace std;

int mul(int a,int b, int c){
    return a*b*c;
}

double mul(int a, int b){
    return a*b;
}

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    cout<<a<<"*"<<b<<"="<<mul(a,b)<<endl;
    cout<<a<<"*"<<b<<"*"<<c<<"="<<mul(a,b,c)<<endl;
}