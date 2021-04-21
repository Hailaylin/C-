/**
 * @file L0325_自定义拷贝构造函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0325        题目:自定义拷贝构造函数        得分：0  
  
作业提交截止时间：2021/7/18 0:00:00	 
 	
题目内容：
练习书上90页的例3.25，理解拷贝构造函数的作用，掌握自定义拷贝构造函数的写法。
其中对象p1构造时的两个参数从键盘上输入。
例：
（1）输入：30 40 输出：60 80
 */

#include<iostream>
using namespace std;

class Print{
    private:
        int x, y;
    public:
        Print(int a, int b):x(a),y(b)
        {}
        Print(const Print &p){
            x=2*p.x;
            y=2*p.y;
        }
        void print(){
            cout << x << " " << y << endl;
        }
};

int main(){
    int a, b;
    cin >> a >> b;
    Print p1(a,b);
    Print p2(p1);
    //p1.print();
    p2.print();
}