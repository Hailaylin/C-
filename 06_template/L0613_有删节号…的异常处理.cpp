/**
 * @file L0613_有删节号的“...”异常处理.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-21
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0613        题目:有删节号的“...”异常处理        得分：0  
  
作业提交截止时间：2021/7/24 0:00:00	 
 	
题目内容：
练习书上的例6.13。
程序运行如下：
Any type exception!
end
 */

#include<iostream>
using namespace std;

void func(int x){
    if (x){
        throw x;
    }
}
int main(){
    try
    {
        func(5);
        cout << "这条语句不会被执行" <<endl;   //这条语句不会被执行
    }
    catch(...)
    {
        cout << "Any type exception!" << endl;
    }
    cout << "end" <<endl;
}