/**
 * @file L0817_优先队列.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0817        题目:优先队列        得分：0  
  
作业提交截止时间：2021/7/1 0:00:00	 
 	
题目内容：
先练习书上例8.17，再完成如下功能：
从键盘上输入一个n，再输入n个整数放入优先队列，然后队列中所有元素出队列并输出。

（1）输入：
3
11
3
543
输出：
Priority_queue...
543
11
3
 */

#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pr;
    int n;
    cin >> n;
    for(int i=0; i<n ;i++){
        int input;
        cin >> input;
        pr.push(input);
    }
    cout << "Priority_queue..." << endl;
    while(!pr.empty()){
        cout << pr.top() << endl;
        pr.pop();
    }
}