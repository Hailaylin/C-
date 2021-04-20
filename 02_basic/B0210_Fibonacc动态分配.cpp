/**
 * @file B0210_Fibonacc动态分配.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：B0210        题目:Fibonacc        得分：0  
  
作业提交截止时间：2021/4/12 0:00:00	 
 	
题目内容：
编写一个C++风格的程序，用动态分配空间的方法计算Fibonacc数列的前n(n>=2)项并存储到动态分配的空间（数组中），然后再输出，

例：
（1）输入：2
输出：
1
1
（2）输入：3
输出：
1
1
2
（3）输入：1
输出：Please reinput n(n>=2):
输入：5
输出：
1
1
2
3
5
 */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n<2){
        cout << "Please reinput n(n>=2):" << endl;
        cin >> n;
    }
    
    int *fib=new int[n];
    fib[0]=1, fib[1]=1;

    for(int i=2; i<n; i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    
    for(int i=0; i<n; i++){
        cout << fib[i] << endl;
    }

    delete fib;
}