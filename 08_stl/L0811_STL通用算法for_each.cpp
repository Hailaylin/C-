/**
 * @file L0811_STL通用算法for_each.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0811        题目:STL通用算法for_each        得分：0  
  
作业提交截止时间：2021/7/19 0:00:00	 
 	
题目内容：
练习书上例8.11，其中list中添加的字符串从键盘上输入，共5个，并利用前插法插入到list。
例：
（1）输入：
apple
cherry
orange
peach
walnut
输出：
walnut
peach
orange
cherry
apple
 */

#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void print(string &f){
    cout << f << endl;
}

int main(){
    list<string> frult;
    string f;
    for(int i=0; i<5; i++){
        cin >> f;
        frult.insert(frult.begin(),f);
    }
    for_each(frult.begin(), frult.end(), print);    
}