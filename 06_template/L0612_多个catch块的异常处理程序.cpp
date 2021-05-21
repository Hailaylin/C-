/**
 * @file L0612_多个catch块的异常处理程序.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-21
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0612        题目:多个catch块的异常处理程序        得分：0  
  
作业提交截止时间：2021/7/24 0:00:00	 
 	
题目内容：
练习书上的例6.12，程序运行如下：
Wrong:double!
end
 */

#include<iostream>
using namespace std;

int main(){
    double a=2.5;
    try
    {
        throw a;
    }
    catch(int)
    {
        cout << "Wrong:int!" << endl;
    }
    catch(double)
    {
        cout << "Wrong:double!" << endl;
    }
    cout << "end" << endl;
}