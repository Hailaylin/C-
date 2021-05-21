/**
 * @file L0610_传统异常处理方法.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-21
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0610        题目:传统异常处理方法        得分：0  
  
作业提交截止时间：2021/7/24 0:00:00	 
 	
题目内容：
练习书上的例6.10，程序运行结果如下所示：
7/3=2
Wrong: Diveded by zero!
 */

#include<iostream>
using namespace std;

int Div(int x, int y){
    if(0==y){
        cout << "Wrong: Diveded by zero!" << endl;
        exit(0);
    }
    return x/y;
}

int main(){
    cout << "7/3=" << Div(7,3) << endl;
    cout << Div(7,0) << endl;
}
