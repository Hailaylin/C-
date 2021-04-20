/**
 * @file L0205_使用define的不安全性.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0205        题目:使用#define的不安全性        得分：0  
  
作业提交截止时间：2021/4/7 20:00:00	 
 	
题目内容：
练习书上例2.5，要求整数a从键盘上输入。
例：
（1）输入：1 输出：T2 is 2
 */

#include<iostream>
using namespace std;

int main(){
    #define T1 a+a
    #define T2 T1-T1
    int a;
    cin >> a;
    cout << "T2 is " << T2 << endl;
}