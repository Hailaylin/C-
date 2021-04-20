/**
 * @file L0320_string类练习.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0320        题目:string类练习        得分：0  
  
作业提交截止时间：2021/7/18 0:00:00	 
 	
题目内容：
练习书上84页例3.20，其中有中文字符串的那一行删掉。
例：
（1）输出：
s4 is ABC
s1+s2 is ABCDEF
s1+"123" is ABC123
s3>s1
s4==s1
输入：ok!
输出：s5 is ok!
 */

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="ABC";
    string s2="DEF";
    string s3("GHI");
    string s4,s5;
    s4=s1;
    cout << "s4 is " << s4 << endl;
    s5 = s1+s2;
    cout << "s1+s2 is " << s5 << endl;
    s5=s1+"123";
    cout << "s1+\"123\" is " << s5 << endl;
    if (s3>s1)
        cout << "s3>s1" << endl;
    else cout << "s3<s1" << endl;
    if(s4==s1)
        cout << "s4==s1" << endl;
    else cout << "s4<>s1" << endl;
    cin >> s5;
    cout << "s5 is " << s5;
}