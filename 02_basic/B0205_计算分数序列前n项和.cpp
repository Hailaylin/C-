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
double an(int n, double *array){
    if (n<3)
        return array[n];
    else return array[n]=an(n-1, array)+an(n-2, array);
}

int main()
{
    int n;  //前n项，记录n1 n2 分子分母推an分子分母。numerator分子，denominator分母
    //动态数组
    cin>>n;
    double numerator[n+1]={2,3}, denominator[n+1]={1,2};

    if (n<3)
        cout<<fixed<<setprecision(2)<<numerator[n-1]/denominator[n-1]<<endl;
    else {      //整体右移
        cout<<fixed<<setprecision(2)<<<<endl;
    }
}