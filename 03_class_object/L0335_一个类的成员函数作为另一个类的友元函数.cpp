/**
 * @file L0335_一个类的成员函数作为另一个类的友元函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 *  	       C++与面向对象程序设计	 
题号：L0335        题目:一个类的成员函数作为另一个类的友元函数        得分：0  
  
作业提交截止时间：2021/5/4 0:00:00	 
 	
题目内容：
练习书上109页例3.35，程序运行结果如下：
The boy's name is Wang Qiang, age is 19.
The girl's name is Li Mei, age is 18.

 */

#include<iostream>
using namespace std;

class Girl;
class Boy{
    private:
        string name;    //string方便，有c++风格
        int age;
    public:
        Boy(string n, int a):name(n), age(a) {}    //初始化参数列表简洁
        void disp(Girl &);  
};

class Girl{
    private:
        string name;    //string方便，有c++风格
        int age;
    public:
        Girl(string n, int a):name(n), age(a) {}    //初始化参数列表简洁
        friend void Boy::disp(Girl &);                   //不写引用名
};

//输出女孩名字年龄，复制输出语句改……保证对
void Boy::disp(Girl &girl){
    cout << "The boy's name is " << name << ", age is " << age << "." << endl;  
    cout << "The girl's name is " << girl.name << ", age is " << girl.age << "." <<endl;

}

int main()
{
    Girl g1("Li Mei",18);
    Boy b1("Wang Qiang",19);
    
    b1.disp(g1);
     
    return 0;
}