/**
 * @file L0706_用户自定义操纵符1.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-06-04
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0706        题目:用户自定义操纵符1        得分：0  
  
作业提交截止时间：2021/6/20 0:00:00	 
 	
题目内容：
练习书上301页的例7.6，掌握自定义输出流操纵符函数的方法。
例：
（1）输入：123
输出：
123
7b&&&&&&&&
 */

#include<iostream>
#include<iomanip>
using namespace std;

ostream &output1(ostream &stream)
{
    stream.setf(ios::left);
    stream<<setw(10)<<hex<<setfill('&');
    return stream;
}

int main(){
    int in;
    cin >> in;
    cout << in << endl;
    cout << output1 << in << endl;   
    return 0;
}