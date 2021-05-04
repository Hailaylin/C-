/**
 * @file B0209_迭代法求方程根.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-03
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：B0209        题目:迭代法求方程根        得分：0  
  
作业提交截止时间：2021/5/10 0:00:00	 
 	
题目内容：
用迭代法求a的平方根，迭代公式如下图所示，要求前后两次求出的x的差的绝对值小于10的-5次方。输出平方根时保留2位小数。x与a用double类型数据。
例：
（1）输入：2 输出：1.41
（2）输入：4 输出：2.00
（3）输入：2016  输出：44.90
 */

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

//迭代不会设计啊…………啊这
int main(){
    double a, x0, x1=0;
    cin >> a;
    x1=a;
    double end = 1e-5;
    do{
        x0=x1;
        x1=(x0+a/x0)/2;
    }while(abs(x1-x0)>=end);    //这个abs就很灵性，不加全错，它起了什么作用呢？
    cout << fixed << setprecision(2) <<x1 <<endl;
}