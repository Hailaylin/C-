/**
 * @file L0603_两个类型参数的函数模板.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0603        题目:两个类型参数的函数模板        得分：0  
  
作业提交截止时间：2021/7/24 0:00:00	 
 	
题目内容：
练习书上的例6.3，掌握有多个类型参数的函数模板的写法。
程序运行如下所示：
10 hao
0.123 10

 */

#include<iostream>
using namespace std;

template<typename T1, class T2> //typename 和 class 都可以，那么可不可以混着用呢？
//事实证明可以，编译也不会报错，但实际上写还是得用typename……
//谁会这么傻用俩不同名字的，容易和类class混
//输出两个不同类型的变量
void Print2(T1 a, T2 b){
    cout << a << " " << b << endl;
}

int main(){
    Print2(10, "hao");
    Print2(0.123, 10);
}