/**
 * @file L0339_常引用作为函数参数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0339        题目:常引用作函数参数        得分：0  
  
作业提交截止时间：2021/5/6 0:00:00	 
 	
题目内容：
练习书上118页例3.39，了解常引用作函数参数的作用。
其中a与b的值从键盘上输入。
例：
输入：20 30
输出：20+30=50
 */

#include<iostream>
using namespace std;

int add(const int &a, const int &b){
    return a+b;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << a << "+" << b << "=" << add(a,b);
}