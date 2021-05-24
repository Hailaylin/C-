/**
 * @file L0815_利用栈进行进制转换.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0815        题目:利用栈进行进制转换        得分：0  
  
作业提交截止时间：2021/7/23 0:00:00	 
 	
题目内容：
先练习书上例8.15，再完成：从键盘上输入一个10进制数m和一个n(1<n<10)，将m转换为n进制数。
例：
（1）输入：100 8  输出：144
（2）输入：100 2  输出：1100100
 请注意，main()函数必须按如下所示编写：
int main()
{
    int m,n;
    cin>>m>>n;
    ToNary(m,n);
    return 0;
}

 */
#include<iostream>
#include<stack>
using namespace std;

void ToNary(int m, int n){
    stack<int> nary;
    while(m){
        nary.push(m%n);
        m/=n;
    }
    while(!nary.empty()){
        cout << nary.top();
        nary.pop();
    }
}

int main()
{
    int m,n;
    cin>>m>>n;
    ToNary(m,n);
    return 0;
}