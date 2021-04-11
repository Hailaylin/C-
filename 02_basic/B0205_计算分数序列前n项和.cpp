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

//分析:实质上是两个递推数列求an……这种思路也行？

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    float sum=0.0,fz=2.0,fm=1.0,temp;   //定义结果变量（sum），分子（fz）和分母（fm）变量，和临时变量（temp）
    cin>>n;
    for(int i=1;i<=n;i++)  //进行20次循环求和
    {
        sum+=(fz/fm);
        temp=fz;
        fz=fz+fm;
        fm=temp;
    }
    cout<<fixed<<setprecision(2)<<sum<<endl;  //输出结果
    return 0;
}
/*
————————————————
版权声明：本文为CSDN博主「centralunit」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/centralunit/article/details/54145587
*/