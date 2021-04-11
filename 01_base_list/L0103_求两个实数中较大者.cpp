/**
 * @file L0103_求两个实数中较大者.cpp
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-07
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0103        题目:求两个实数中较大者        得分：0  
  
作业提交截止时间：2022/1/1 0:00:00	 
 	
题目内容：
从键盘上输入两个实数，输出其中较大者。
例：
（1）
输入：1.2 -2.3
输出：max=1.2

其中main函数如下所示：
 请注意，main()函数必须按如下所示编写：
int main()
{
    double max(double x, double y);
    double a,b,m;
    cin>>a>>b;
    m=max(a,b);
    cout<<"max="<<m<<endl;
    return 0;
} 
 */

#include<iostream>
using namespace std;
double max(double x, double y)
{
    return x>y?x:y;
}
int main()
{
    double max(double x, double y);
    double a,b,m;
    cin>>a>>b;
    m=max(a,b);
    cout<<"max="<<m<<endl;
    return 0;
}