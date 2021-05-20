/**
 * @file L0605_函数模板与非模板函数重载.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0605        题目:函数模板与非模板函数重载        得分：0  
  
作业提交截止时间：2021/7/24 0:00:00	 
 	
题目内容：
练习书上的例6.5，程序运行结果如下：
Calling ordinary function:max(int):20
Calling template function:max(double):20.2
Calling template function:max(char):j

 */

#include<iostream>
using namespace std;
//函数名用max再用namespace std会和原有的max函数冲突？
template<typename T>
T MAX(T a, T b){
    cout << "Calling template function:";
    return (a>b) ? a:b;
}

int MAX(int a, int b){
    cout << "Calling ordinary function:max(int):";
    return (a>b) ? a:b;
}

int main(){
    cout << MAX(20,10) << endl;
    cout << "max(double):" << MAX(20.2, 5.20) << endl;
    cout << "max(char):" << MAX('j', 'h') << endl;
    //cout << max(1,2); 事实证明，原来有一个max函数，怪不得编译报错“call of overloaded”
}