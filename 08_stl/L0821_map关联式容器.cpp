/**
 * @file L0821_map关联式容器.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-24
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0821        题目:map关联式容器        得分：0  
  
作业提交截止时间：2021/7/1 0:00:00	 
 	
题目内容：
先练习书上例8.21，完成如下功能：
将数字与星期（字符串）添加到map容器，s.insert(pair<int,string>(1,"Monday"));
输入一个整数，输出相应的星期英文。
例：（1）输入：1  输出：Monday
（2）输入：9  输出：Error!
 */

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<int,string> s;
    s.insert(pair<int,string>(1,"Monday"));
    s.insert(pair<int,string>(2,"Tuesday"));
    s.insert(pair<int,string>(3,"Wednesday"));
    s.insert(pair<int,string>(4,"Thursday"));
    s.insert(pair<int,string>(5,"Friday"));
    s.insert(pair<int,string>(6,"Saturday"));
    s.insert(pair<int,string>(7,"Sunday"));
    int day;
    cin >> day;
    if (day>=1 && day <=7) cout << s[day] << endl;
    else cout << "Error!" << endl;
}