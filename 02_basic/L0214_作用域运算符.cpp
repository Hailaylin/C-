/*
	题号：L0214        题目:作用域运算符        得分：0  
  
作业提交截止时间：2021/4/12 0:00:00	 
 	
题目内容：
练习书上例2.14。
要求从键盘上输入avar的值。
例：（1）输入：25
输出：
local avar=25
global avar=10
*/

#include<iostream>
using namespace std;
int avar;

int main(){
    int avar;
    cin>>avar;  //从键盘获取avar值
    ::avar = 10;
    cout<<"local avar="<<avar<<endl;
    cout<<"global avar="<<::avar<<endl;
}