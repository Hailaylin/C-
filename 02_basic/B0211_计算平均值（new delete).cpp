/**
 * @file B0211_计算平均值（new delete).cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-03
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：B0211        题目:计算平均值（new delete)        得分：0  
  
作业提交截止时间：2021/5/10 0:00:00	 
 	
题目内容：
从键盘上输入n，再输入n个实数，计算它们的平均值并输出。
要求用new给这n个实数在内存中动态分配空间，计算完毕后用delete释放所占有空间。
例：
（1）输入：
5
1.0 2.2 2.8 4.1 4.9
输出：aver=3
（2）输入：
4
1.1 0.1 1.2 -0.4
输出：aver=0.5
 */


#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double *arr = new double[n];
    double sum=0, aver=0;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        sum+=arr[i];
    }
    aver=sum/n;
    cout << "aver=" << aver << endl;
    delete arr;
}