/**
 * @file L0604_函数模板的重载举例.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0604        题目:函数模板的重载举例        得分：0  
  
作业提交截止时间：2021/7/24 0:00:00	 
 	
题目内容：
练习书上的例6.4，掌握重载函数模板的写法。
程序运行结果如下：
max(10,20)=20
max(10.1,20.2,30.3)=30.3
 */

#include<iostream>
using namespace std;

/**
 * 要求写俩参数的最大值函数max和仨参数的
 */

template<typename T>
/**
 * 返回俩数最大值
 * @param a 
 * @param b 
 * @return T 
 */
T MAX(T a, T b){
    return a>b ? a:b;
}

template<typename T>
/**
 * 返回三个数最大值，每写一个都要加上面那句话………………真麻烦，不过避免了后面再定义函数时的二义性
 * @param a 
 * @param b 
 * @param c 
 * @return T
 * 这些注释其实可以不用打，一眼就能看懂的，不要费工夫 
 */
T MAX(T a, T b, T c){
    T temp;
    temp = a>b ? a:b;
    return temp>c ? temp:c;
}

//template“ ”<typename T1, typename T> 中间不能有空格

int main(){
    cout << "max(10,20)=" << MAX(10,20) << endl;
    cout << "max(10.1,20.2,30.3)=" << MAX(10.1,20.2,30.3) << endl;
}