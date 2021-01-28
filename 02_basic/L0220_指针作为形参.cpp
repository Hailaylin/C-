/**
 * 题号：L0220        题目:指针作为形参        得分：0  
  
作业提交截止时间：2021/7/18 0:00:00	 
 	
题目内容：
练习书上例2.20，程序运行如下：
（1）
3 5  //输入
a=3,b=5
After swap:a=5,b=3
*/

#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int a, b;
    cin >> a >> b ;
    cout << "a=" << a << ",b=" << b << endl; 
    swap(&a, &b);
    cout << "After swap:a=" << a << ",b=" << b << endl;
    return 0;
}