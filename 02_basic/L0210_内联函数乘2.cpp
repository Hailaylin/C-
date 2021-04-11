/**
 * 题号：L0210        题目:内联函数：乘2        得分：0  
  
作业提交截止时间：2021/7/17 0:00:00	 
 	
题目内容：
练习书上例2.10
*/

#include<iostream>
using namespace std;

inline int doub(int x){
    return x*2;
}
int main()
{
    for(int i=1; i<=3; i++)
        cout<<i<<" double is "<<doub(i)<<endl;
    cout<<"1+2 double is "<<doub(1+2)<<endl;
    return 0;
}