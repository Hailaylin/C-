/**
 * @file L0319_this指针2.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0319        题目:this指针（2）        得分：0  
  
作业提交截止时间：2021/7/18 0:00:00	 
 	
题目内容：
练习书上82页例3.19，理解this指针。
程序运行的结果可以与书上不一样。
 */

#include<iostream>
using namespace std;

class A{
    private:
        int x;
    public:
        A(int x1){
            x=x1;
        }
        void disp(){
            cout << "this=" << this << " when x=" << this->x << endl;
        }
};

int main(){
    A a(1), b(2), c(3);
    a.disp();
    b.disp();
    c.disp();
}