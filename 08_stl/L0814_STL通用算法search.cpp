/**
 * @file L0814_STL通用算法search.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0814        题目:STL通用算法search()        得分：0  
  
作业提交截止时间：2021/7/23 0:00:00	 
 	
题目内容：
先练习书上例8.14，然后完成下面的功能。
例1（除了输入行其他行为输出）： 
Please input the list string:
abcdefg //输入
Please input the target string:
cde  //输入
Found!

例2（除了输入行其他行为输出）： 
Please input the list string:
abcdefg //输入
Please input the target string:
cee  //输入
Not Found!
 */

#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
    list<char> source;
    list<char> target;
    char ch;
    cout << "Please input the list string:" << endl;
    //逐个字符输入，遇到换行符或者文件结束标志EOF就停止输入
    while((ch=getchar()) != '\n' && ch != EOF){     //要加上EOF才能过，应该是文件重定向导致不能用/n判断吧
        source.insert(source.begin(), ch);
    }
    cout << "Please input the target string:" << endl;
    while((ch=getchar()) != '\n' && ch != EOF){
        target.insert(target.begin(), ch);
    }
    list<char>::iterator i = search(source.begin(), source.end(), target.begin(), target.end());
    if (i!=source.end()) cout << "Found!" << endl;
    else cout << "Not Found!" << endl;
}