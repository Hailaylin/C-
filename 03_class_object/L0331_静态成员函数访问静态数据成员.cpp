/**
 * @file L0331_静态成员函数访问静态数据成员.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0331        题目:静态成员函数访问静态数据成员        得分：0  
  
作业提交截止时间：2021/4/30 0:00:00	 
 	
题目内容：  
练习书上102页开始的例3.31，掌握静态成员函数与静态数据成员隶属于类而非隶属于对象的本质。
程序运行结果如下图所示：

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
    Small_cat(double);
    void display();
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
void Small_cat::display(){
    cout << "This cat's weight is:" << weight << "kg" << endl;
}

//输出总数+体重
void Small_cat::total_disp(){
    cout << total_number << " cats' weights are:" << total_weight << "kg" << endl;
}

int main(){
    Small_cat c[3]={(0.5),(0.6),(0.4)};
    for(int i=0; i<3; i++){
        c[i].display();
    }
    Small_cat::total_disp();
}
