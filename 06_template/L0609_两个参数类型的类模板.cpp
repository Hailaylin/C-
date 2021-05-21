/**
 * @file L0609_两个参数类型的类模板.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-21
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0609        题目:两个参数类型的类模板        得分：0  
  
作业提交截止时间：2021/7/24 0:00:00	 
 	
题目内容：
练习书上的例6.9，掌握有两个参数类型的类模板的写法。
程序运行结果如下所示：
i=12,j=3.4
i=x,j=Have a brilliant day!n//
 */

#include<iostream>
using namespace std;

template<typename T1, typename T2>
class Ty2{
    private:
        T1 a;
        T2 b;
    public:
        Ty2(T1 a1, T2 b1):a(a1),b(b1) {}
        void show(){
            cout << "i=" << a << ",j=" << b << endl;
        }
};

int main(){
    Ty2<int, double> ob1(12,3.4);
    Ty2<char, const char*> ob2('x', "Have a brilliant day!");
    ob1.show();
    ob2.show();
}