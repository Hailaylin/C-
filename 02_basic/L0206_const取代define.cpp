/**
 * @file L0206_const取代define.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0206        题目:const取代define        得分：0  
  
作业提交截止时间：2021/4/7 20:00:00	 
 	
题目内容：
练习书上例2.6，用const取代define。
例：（1）输入 2  输出：T2 is 0
 */

#include<iostream>
using namespace std;

int main(){
    int a=1;
    cin >> a;
    int const T1 = a+a;
    int const T2 = T1-T1;
    cout << "T2 is " << T2 <<endl;
}