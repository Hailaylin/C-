/*
题号：B0207        题目:计算a+aa+aaa+...+aa...aaa(n个a)的值        得分：0  
  
作业提交截止时间：2021/4/12 0:00:00	 
 	
题目内容：
从键盘上输入a(0<a<10)和n，计算a+aa+aaa+...+aa...aaa(n个a)的值。
例：
（1）输入：2 5  输出：24690
（2）输入：9 9  输出：1111111101
（3）输入：2 10 输出：2469135800
*/

#include<iostream>
using namespace std;

int main()
{
    int a=0, n=0; 
    long long sum=0, term=0;
    cin>>a>>n;
    term =  sum = a;

    for (int i=1; i<n; i++){
        term = term*10 + a;
        sum +=  term;
    }

    cout<<sum;
}
