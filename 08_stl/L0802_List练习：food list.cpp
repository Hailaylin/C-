/**
 * @file L0802_List练习：food list.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-04
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0802        题目:List练习：food list        得分：0  
  
作业提交截止时间：2021/7/13 0:00:00	 
 	
题目内容：
练习书上的例8.2，“milk”等前面的空格为4个。


 */

/*
#include<iostream>
#include<list>
#include<string>
#include<algorithm>
*/
//一个头文件搞定全部
#include<bits/stdc++.h>
using namespace std;

void PrintLine(string &StringLine) {
    cout << StringLine << endl;
}

int main(){
    list<string> Food;
    Food.push_back("---food list---");
    Food.push_back("    milk");
    Food.push_back("    bluemerry");
    Food.push_back("    banana");
    Food.push_back("    avocado");
    Food.push_back("--------------");
    for_each(Food.begin(), Food.end(), PrintLine);
}