/**
 * @file L0602_函数模板2.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0602        题目:函数模板2        得分：0  
  
作业提交截止时间：2021/7/24 0:00:00	 
 	
题目内容：
练习书上的例6.2，掌握函数模板的写法及应用。
程序运行如下：
SUM(int) is 55
SUM(double) is 59.6
 */

#include<iostream>
using namespace std;

template<typename T>
//T数组元素求和
T SUM(T * arr, size_t size =0){ //cpp primer 都用size_t，就试试
    T sum;
    for (size_t i = 0; i < size; i++)
        sum+=arr[i];
    return sum;
}

int main(){
    int int_arr[]={1,2,3,4,5,6,7,8,9,10};
    double double_arr[]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.10};
    int int_arr_sum = SUM(int_arr, 10);
    double double_arr_sum = SUM(double_arr, 10);
    cout << "SUM(int) is " << int_arr_sum << endl;
    cout << "SUM(double) is " << double_arr_sum << endl;
}