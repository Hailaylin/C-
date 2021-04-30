/**
 * @file L0340_常对象与非常对象的比较.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0340        题目:常对象与非常对象的比较        得分：0  
  
作业提交截止时间：2021/5/6 0:00:00	 
 	
题目内容：
练习书上119页例3.40（非常对象），然后再按119页的内容进行修改，观察一下会出现什么样的错误。

 */

#include<iostream>
using namespace std;

class Sample {
    public:
        int m;
        Sample(int i, int j):m(i),n(j) {}
        void setvalue(int i) { n=i; }
        void display() {
            cout << "m=" << m << endl;
            cout << "n=" << n << endl;
        }
    private:
        int n;
};

int main() {
    Sample a(10,20);
    a.setvalue(40); 
    a.m=30;
    a.display();  
}