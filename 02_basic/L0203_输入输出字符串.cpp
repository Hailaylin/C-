/**
 * @file L0203_输入输出字符串.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0203        题目:输入输出字符串        得分：0  
  
作业提交截止时间：2021/4/7 20:00:00	 
 	
题目内容：
从键盘上输入一个名字，并输出。
 */

#include<iostream>
using namespace std;

int main(){
    char name[20];         //这样输入不能输入空格……要cin.get/cin.getline
    cout << "Hello, your name:" << endl;
    cin.get(name, 20);
    cout << "My name is " << name << endl;
}