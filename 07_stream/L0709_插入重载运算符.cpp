/**
 * @file L0708_插入重载运算符.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-06-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0708        题目:重载插入运算符        得分：0  
  
作业提交截止时间：2021/6/20 0:00:00	 
 	
题目内容：
练习书上303页的例7.8，掌握重载插入运算符的方法。
程序运行结果如303页所示。
 */

#include<iostream>
using namespace std;

class Three_d{
    private:
        
    public:
        int x,y,z;
        Three_d(int a, int b, int c):x(a),y(b),z(c) {}
        friend istream &operator>>(istream &input, Three_d &obj);
        friend ostream &operator<<(ostream &output, Three_d &obj);
        
};

istream &operator>>(istream &input, Three_d &obj){
    cout << "Enter x,y,z value:";
    input>>obj.x;
    input>>obj.y;
    input>>obj.z;
    return input;
}

ostream &operator<<(ostream &output, Three_d &obj){
    output<<obj.x<<",";
    output<<obj.y<<",";
    output<<obj.z<<endl;
}

int main(){
    Three_d obj(10,20,30);
    cout << obj;
    cin >> obj;
    cout << obj;
}