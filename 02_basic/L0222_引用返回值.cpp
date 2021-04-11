/**
 * 
 * 	题号：L0222        题目:引用返回值        得分：0  
  
作业提交截止时间：2021/7/18 0:00:00	 
 	
题目内容：
练习书上例2.22，掌握返回值为引用的函数编写。
要求：书中的 25 这个数从键盘上输入，用一个变量来存储。
例：（1）输入：25  输出：index(2)=25
*/

#include<iostream>
using namespace std;

int a[]={1,3,5,7,9};
int &index(int x){
    return a[x];
}

int main(){
    int a;
    cin >>a;
    index(2)=a;
    cout <<"index(2)="<< index(2);
    return 0;
}
