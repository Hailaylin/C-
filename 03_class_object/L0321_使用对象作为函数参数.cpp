/**
 * @file L0321_使用对象作为函数参数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0321        题目:使用对象作为函数参数        得分：0  
  
作业提交截止时间：2021/7/18 0:00:00	 
 	
题目内容：
练习书上85页例3.21，理解对象作为函数参数时的传值调用。
程序输出：
Before running sqr_it,the value of i in the actual perameter object obj is:10
In sqr_it, the value of i in the formal perameter object ob is:100
After running sqr_it,the value of i in the actual perameter object obj is:10
 */

#include<iostream>
using namespace std;

class Tr{
    public:
        Tr(int n):i(n)
        {}
        void set_i(int n){
            i=n;
        }
        int get_i(){
            return i;
        }
    private:
        int i;
};

void sqr_it(Tr ob){
    ob.set_i(ob.get_i() * ob.get_i());
    cout << "In sqr_it, the value of i in the formal perameter object ob is:" << ob.get_i() << endl;
}

int main(){
    Tr obj(10);
    cout << "Before running sqr_it,the value of i in the actual perameter object obj is:" << obj.get_i() << endl;
    sqr_it(obj);
    cout << "After running sqr_it,the value of i in the actual perameter object obj is:" << obj.get_i() << endl;
}