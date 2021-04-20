/**
 * @file L0324_对象赋值.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0324        题目:对象赋值        得分：0  
  
作业提交截止时间：2021/7/18 0:00:00	 
 	
题目内容：
练习书上88页例3.24，其中o1.set()函数中的两个参数从键盘上输入。
理解对象赋值的含义。
例：
（1）输入：20 5
输出：
20 5
20 5
 */

#include<iostream>
using namespace std;

class Myclass{
    private:
        int a, b;
    public:
        void set(int i, int j){
            a=i;
            b=j;
        }
        void show(){
            cout << a << " " << b << endl;
        }
};

int main(){
    Myclass o1 , o2;
    int a, b;
    cin >> a >> b;
    o1.set(a, b);
    o2=o1;
    o1.show();
    o2.show();
}