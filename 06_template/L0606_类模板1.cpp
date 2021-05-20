/**
 * @file L0606_类模板1.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0606        题目:类模板1        得分：0  
  
作业提交截止时间：2021/7/24 0:00:00	 
 	
题目内容：
练习书上的例6.6，程序运行结果如下：
max(int):7
max(double):2.2
max(char):m
 */

#include<iostream>
using namespace std;

template<typename T>
class Compare{
    private:
        T a,b;
    public:
        Compare(T a1, T b1):a(a1),b(b1) {}
        T Max(){
            return (a>b) ? a:b;
        }
};

int main(){
    Compare<int> c1(7,1);
    Compare<double> c2(2.2, 0.20215201314);
    Compare<char> c3('l', 'm');
    cout << "max(int):" << c1.Max() << endl;
    cout << "max(double):" << c2.Max() << endl;
    cout << "max(char):" << c3.Max() << endl;
}