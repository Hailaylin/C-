/**
 * @file L0326_默认拷贝构造函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0326        题目:默认拷贝构造函数        得分：0  
  
作业提交截止时间：2021/7/18 0:00:00	 
 	
题目内容：
练习书上92页例3.26，理解默认拷贝构造函数的功能。
 */

#include<iostream>
using namespace std;

class Print{
    private:
        int x, y;
    public:
        Print(int a, int b):x(a),y(b)
        {}
        void print(){
            cout << x << " " << y << endl;
        }
};

int main(){
    Print p1(30,40);
    Print p2(p1);
    Print p3=p1;
    p1.print();
    p2.print();
    p3.print();
}