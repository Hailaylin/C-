/**
 * @file L0816_队列练习.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0816        题目:队列练习        得分：0  
  
作业提交截止时间：2021/7/24 0:00:00	 
 	
题目内容：
先练习书上例8.16，完成功能：从键盘上输入5个数，将它们插入队列，出队列时输出它们的值（每输出一个元素，再输出一个逗号用于间隔，最后一个元素不输出逗号）。
例：
输入：34 3 64 345 77
输出：34,3,64,345,77
 */

#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    for (int i=0; i<5; i++){
        int a;
        cin >> a;
        q.push(a);
    }
    for(int i=0; i<4; i++){
        cout << q.front() << ",";
        q.pop();
    }
    cout << q.front();
    q.pop();
}