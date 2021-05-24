/**
 * @file L0809_list练习.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 作业提交截止时间：2021/7/15 0:00:00	 
 	
题目内容：
练习书上例8.9， 3个元素从键盘上输入，前2个头插法插入list，后1个尾插法插入list。
例：（1）输入： 1 2 3
输出：
List...
2
1
3
 */

#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> li;
    list<int>::iterator i;

    int a, b, c;
    cin >> a >> b >> c;
    li.insert(li.begin(),a);
    li.insert(li.begin(),b);
    li.insert(li.end(),c);

    cout << "List..." << endl;
    for(i=li.begin(); i!=li.end(); i++){
        cout << *i << endl;
    }
}