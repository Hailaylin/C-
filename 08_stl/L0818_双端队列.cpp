/**
 * @file L0818_双端队列.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-24
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0818        题目:双端队列        得分：0  
  
作业提交截止时间：2021/7/1 0:00:00	 
 	
题目内容：
先练习书上例8.18与例8.19，完成下面功能：
从键盘上输出6个数，按照顺序“后前后前后前”的顺序添加到双端队列中，输出队列中的每一个元素。
例1：
输入：
1.1
2.2
3.3
4.4
5.5
6.6
输出：
nums[0]=6.6
nums[1]=4.4
nums[2]=2.2
nums[3]=1.1
nums[4]=3.3
nums[5]=5.5
 */

#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

const int N = 6;

int leep = 0;

bool print(double a){
    cout << "nums[" << leep++ << "]=" << a << endl;
}

int main(){
    deque<double> deq;
    for(int i=1; i<=N; i++){
        double in;
        cin >> in;
        if(i%2==1) deq.push_back(in);
        else deq.push_front(in);
    }
    for_each(deq.begin(), deq.end(), print);
}