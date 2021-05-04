/**
 * @file B0214_内联函数练习.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-03
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：B0214        题目:内联函数练习        得分：0  
  
作业提交截止时间：2021/5/10 0:00:00	 
 	
题目内容：
利用内联函数计算三个实数的最大值，程序运行如下：
（1）
1.2 2.3 1.5 //输入
max=2.3
 */

#include<iostream>
using namespace std;
const int N = 3;
double inline max(double *a) {
    double max;
    for (int i=0; i<N; i++) {
        if(a[i]>max) max=a[i];
    }
    return max;
}

int main(){
    double a[N];
    for (int i = 0; i<N; i++) {
        cin >> a[i];
    }
    cout << "max=" << max(a) << endl;
}