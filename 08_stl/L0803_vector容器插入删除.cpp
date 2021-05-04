/**
 * @file L0803_vector容器插入删除.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-04
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0803        题目:vector容器插入删除        得分：0  
  
作业提交截止时间：2021/7/13 0:00:00	 
 	
题目内容：
练习书上例8.3，3个整数从键盘上输入，前2个头插到vector中，第3个尾插到vector中。
例：
（1）输入： 2 5 -8
输出：
Before deleting...
5
2
-8
After deleting...
-8
 */

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> num;
    int a, b, c;
    cin >> a >> b >> c;
    num.insert(num.begin(), a);
    num.insert(num.begin(), b);
    num.insert(num.end(), c);
    cout << "Before deleting..." << endl;
    for (vector<int>::iterator it=num.begin(); it < num.end(); it++) { //it<num.end()会死循环，不知道为什么
        cout << *it << endl;
    }
    num.erase(num.begin(),num.begin()+2);
    cout << "After deleting..." << endl;
    for (unsigned int i=0; i < num.size(); i++) { //报错，因为一个有符号类型数和int i与无符号类型数比较，num.size()为long long unsigned int. comparison of integer expressions of different signedness: 'int' and 'std::vector<int>::size_type' {aka 'long long unsigned int'} [-Wsign-compare]
        cout << num[i] << endl;
    }
}