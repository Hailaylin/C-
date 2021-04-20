/**
 * @file L0314_用只有一个参数的构造函数给对象数组赋值.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0314        题目:用只有一个参数的构造函数给对象数组赋值        得分：0  
  
作业提交截止时间：2021/4/21 0:00:00	 
 	
题目内容：
练习书上75页的例3.14。
 */

#include<iostream>
using namespace std;

class exam{
    private:
        int x;
    public:
        exam(int n){
            x=n;
        }
        int get_x(){
            return x;
        }
};

int main()
{
    exam ob1[4]={11,22,33,44};
    for (int i=0; i<4; i++){
        cout << ob1[i].get_x() << ' ';
    }
    return 0;
}