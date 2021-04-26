/**
 * @file L0334_非成员函数同时定义为两个类的友元函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0334        题目:非成员函数同时定义为两个类的友元函数        得分：0  
  
作业提交截止时间：2021/5/4 0:00:00	 
 	
题目内容：
练习书上例3.34，程序运行结果如下：
The girl's name is Li Mei, age is 18
The boy's name is Wang Qiang, age is 19

 请注意，main()函数必须按如下所示编写：
int main()
{
    Girl g1("Li Mei",18);
    Boy b1("Wang Qiang",19);
    
    disp(g1,b1);
     
    return 0;
} 
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
        friend void disp(Girl &, Boy &);  
};

class Girl{
    private:
        string name;    //string方便，有c++风格
        int age;
    public:
        Girl(string n, int a):name(n), age(a) {}    //初始化参数列表简洁
        friend void disp(Girl &, Boy &);                   //不写引用名
};

//输出女孩名字年龄，复制输出语句改……保证对
void disp(Girl &girl, Boy & boy){
    cout << "The girl's name is " << girl.name << ", age is " << girl.age << endl;
    cout << "The boy's name is " << boy.name << ", age is " << boy.age << endl;  
}

int main()
{
    Girl g1("Li Mei",18);
    Boy b1("Wang Qiang",19);
    
    disp(g1,b1);
     
    return 0;
}