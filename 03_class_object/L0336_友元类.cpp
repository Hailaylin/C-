/**
 * @file L0336_友元类.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0336        题目:友元类        得分：0  
  
作业提交截止时间：2021/5/4 0:00:00	 
 	
题目内容：
练习书上111页的例3.36，掌握友元类的定义及意义。
程序运行结果：
The boy's name is Tom, and his age is 19.
The girl's name is Mary, and her age is 18.
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
        friend Boy;
};

//输出女孩名字年龄，复制输出语句改……保证对
void Boy::disp(Girl &girl){
    cout << "The boy's name is " << name << ", and his age is " << age << "." << endl;  
    cout << "The girl's name is " << girl.name << ", and her age is " << girl.age << "." <<endl;

}

int main()
{
    Girl g1("Mary",18);
    Boy b1("Tom",19);
    
    b1.disp(g1);
     
    return 0;
}