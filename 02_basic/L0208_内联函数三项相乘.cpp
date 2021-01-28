/**
 * 题号：L0208        题目:内联函数：三个整数乘积        得分：0  
  
作业提交截止时间：2021/7/17 0:00:00	 
 	
题目内容：
利用内联函数计算三个整数的乘积。例2.8
例：
（1）输入： 1 2 3 输出：1*2*3=6

实现同样的操作也可以用
lambda匿名函数实现
*/

#include<iostream>
using namespace std;

inline int box(int x, int y, int z){
    return x * y * z;
}

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    cout << x << "*" << y << "*" << z << "=" << box(x, y, z) << endl;
    return 0;
}