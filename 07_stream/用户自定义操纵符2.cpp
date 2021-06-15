/**
 * @file 用户自定义操纵符2.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-06-15
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0707        题目:用户自定义操纵符2        得分：0  
  
作业提交截止时间：2021/6/20 0:00:00	 
 	
题目内容：
练习书上302页的例7.7，掌握自定义输入流操纵符的方法。
例：
（1）
输出：Enter number using hex format:
输入：23ae
输出：hex:23ae------dec:9134
 */

#include<iostream>
using namespace std;

istream &input1(istream &in){
    in>>hex;
    cout << "Enter number using hex format:";
    return in;
}

int main(){
    int i;
    cin >> input1 >> i;
    cout << "hex:" << hex << i << "------dec:" << dec << i << endl;
}