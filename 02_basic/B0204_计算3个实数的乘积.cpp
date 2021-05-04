/**
 * @file B0204_计算3个实数的乘积.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-03
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：B0204        题目:计算3个实数的乘积        得分：0  
  
作业提交截止时间：2021/5/10 0:00:00	 
 	
题目内容：
输入3个实数，计算它们的乘积。
利用内联函数实现。
例：
（1）输入：1.1 2 3 输出：6.6
 */

#include<iostream>
using namespace std;

double inline multiply(double a, double b ,double c){
    return a*b*c;
}

int main(){
    double a, b, c;
    cin >> a >> b >> c ;
    cout << multiply(a,b,c);
}