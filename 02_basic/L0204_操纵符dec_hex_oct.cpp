/**
 * @file L0204_操纵符dec_hex_oct.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0204        题目:操纵符dec hex oct        得分：0  
  
作业提交截止时间：2021/4/7 20:00:00	 
 	
题目内容：
从键盘上输入一个整数，按顺序输出它的十进制、八进制、十六进制的值（空格间隔）。
例：
（1）输入：25  输出：25 31 19
（2）输入：2021 输出：2021 3745 7e5

 */

#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    cout << dec << a << " "  << oct << a << " " << hex << a;
}