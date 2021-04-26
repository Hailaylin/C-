/**
 * @file L0332_静态成员函数访问非静态数据成员.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0332        题目:静态成员函数访问非静态数据成员        得分：0  
  
作业提交截止时间：2021/4/30 0:00:00	 
 	
题目内容：
练习书上104页开始的例3.32，掌握静态成员函数访问非静态数据成员时，函数必须添加对象（引用）参数的要求。
三只猫的重量从键盘上输入。
例：
（1）输入：0.5 0.6 0.7
输出：
This cat's weight:0.5kg
This cat's weight:0.6kg
This cat's weight:0.7kg
3 cat's weights are:1.8kg

 */

#include<iostream>
using namespace std;

class Small_cat
{
private:
    /* data */
    double weight;
    static double total_weight;
    static int total_number;
public:
    Small_cat(double);  //输入猫的体重
    static void display(Small_cat &c);
    static void total_disp();
};

//数据初始化
double Small_cat::total_weight=0;
int Small_cat::total_number=0;

//析构 体重 总数 总体重
Small_cat::Small_cat(double w){
    weight = w;
    total_number++;
    total_weight+=weight;
}

//输出单个猫的体重
void Small_cat::display(Small_cat &c){
    cout << "This cat's weight:" << c.weight << "kg" << endl;
}

//输出总数+体重
void Small_cat::total_disp(){
    cout << total_number << " cat's weights are:" << total_weight << "kg" << endl;
}

int main(){
    double w[3];
    for(int i=0; i<3; i++){
        cin >> w[i];
    }
    Small_cat c[3]={(w[0]),(w[1]),(w[2])};
    for(int i=0; i<3; i++){
        Small_cat::display(c[i]);
    }
    Small_cat::total_disp();
}
