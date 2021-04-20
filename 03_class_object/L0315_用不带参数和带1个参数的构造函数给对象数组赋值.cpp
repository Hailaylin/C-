/**
 * @file L0315_用不带参数和带1个参数的构造函数给对象数组赋值.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0315        题目:用不带参数和带1个参数的构造函数给对象数组赋值        得分：0  
  
作业提交截止时间：2021/4/21 0:00:00	 
 	
题目内容：
练习书上76页例3.15。
 */

#include<iostream>
using namespace std;

class exam{
    private:
        int x;
    public:
        exam(){
            x=123;
        }
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
    exam ob2[4]={55,66};
    for (int i=0; i<4; i++){
        cout << ob1[i].get_x() << ' ';
    }
    cout << endl;
    for (int i=0; i<4; i++){
        cout << ob2[i].get_x() << ' ';
    }
    return 0;
}