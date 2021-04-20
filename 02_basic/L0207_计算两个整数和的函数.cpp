/**
 * @file L0207_计算两个整数和的函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0207        题目:函数：计算两个整数的和        得分：0  
  
作业提交截止时间：2021/4/7 20:00:00	 
 	
题目内容：
练习书上的例2.7，从键盘上输入两个整数，用函数计算它们的和并输出。
例：
（1）输入：2 3 输出：2+3=5
 */

#include<iostream>
using namespace std;
int sum( int a, int b){
    return a+b;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    cout << a << "+" << b << "=" << sum(a,b);
}

