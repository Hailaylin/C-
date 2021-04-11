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
//n1,n2整体向右移一位
void swap(double *n1, double *n2, double *an){
    double t = *n2;
    *n2 = *an;
    *n1 = t;
}

int main()
{
    int i=1, n;  //前n项，记录n1 n2 分子分母推an分子分母。numerator分子，denominator分母
    double n1_numerator=2, n1_denominator=1, n2_numerator=3, n2_denominator=2, an_numerator=0, an_denominator=0;
    cin>>n;

    while(i++<=n)
    {
        an_numerator = n1_numerator + n2_numerator;
        an_denominator = n1_denominator + n2_denominator;
        swap(&n1_numerator, &n2_numerator, &an_numerator);
        swap(&n1_denominator, &n2_denominator, &an_denominator);
    }

    cout<<fixed<<setprecision(2)<<an_numerator/an_denominator<<endl;
}