/*
题号：B0205        题目:计算前n项之和        得分：0  
  
作业提交截止时间：2021/4/12 0:00:00	 
 	
题目内容：
有一个分数序列：2/1,3/2,5/3,8/5,...，从键盘上输入n，计算其前n项之和。
输出时保留2位小数。
例：
（1）输入：20 输出：32.66
（2）输入：1   输出：2.00
*/

//分析:实质上是两个递推数列求an

#include<iostream>
#include<iomanip>
using namespace std;

//递归求an,不够熟练
double an_numerator(int n){
    double numerator[2]={2,3};
    if (n<3)
        return numerator[n];
    else return an_numerator(n-1)+an_numerator(n-2);
}

double an_denominator(int n){
    double denominator[2]={1,2};
    if (n<3)
        return denominator[n];
    else return an_denominator(n-1)+an_denominator(n-2);
}

int main()
{
    int n;  //前n项，记录n1 n2 分子分母推an分子分母。numerator分子，denominator分母
    //动态数组?
    cin>>n;
    cout<<fixed<<setprecision(2)<<an_numerator(n-1)/an_denominator(n-1)<<endl;
}