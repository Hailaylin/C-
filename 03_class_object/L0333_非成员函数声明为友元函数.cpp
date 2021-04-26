/**
 * @file L0333_非成员函数声明为友元函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0333        题目:非成员函数声明为友元函数        得分：0  
  
作业提交截止时间：2021/5/4 0:00:00	 
 	
题目内容：
练习书上106页例3.33，理解友元函数的声明与意义。
其中对象g1的两个参数从键盘上输入。
例：
（1）输入：
Chen Xiaoli
18
输出：
The girl's name is Chen Xiaoli, age is 18.
 */

#include<iostream>
#include<string>
using namespace std;

class Girl{
    private:
        string name;    //string方便，有c++风格
        int age;
    public:
        Girl(string n, int a):name(n), age(a) {}    //初始化参数列表简洁
        friend void disp(Girl &);                   //不写引用名
};

//输出女孩名字年龄，复制输出语句改……保证对
void disp(Girl &girl){
    cout << "The girl's name is " << girl.name << ", age is " << girl.age << "." << endl;
}

int main(){
    string name;
    int age;
    getline(cin, name);
    //https://www.jb51.net/article/180408.htm cin.getline(str,num)读取char *, getline(cin,str) 读取string
    cin >> age;

    Girl g(name, age);
    disp(g);
}