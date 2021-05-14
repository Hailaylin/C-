/**
 * @file B0401_UML图-类的集成.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-14
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：B0401        题目:类的继承        得分：0  
  
作业提交截止时间：2021/5/14 15:05:00	 
 	
题目内容：
UML中，可见性分为4级
1、public 公用的 ：用+ 前缀表示 ，该属性对所有类可见
2、protected 受保护的：用 # 前缀表示，对该类的子孙可见
3、private 私有的：用- 前缀表示，只对该类本身可见
4、package 包的：用 ~ 前缀表示，只对同一包声明的其他类可见

请根据以下类图构造Person类与Student类，程序运行结果：
Person()...
Person()...
Student()...
NoName,M,0
WangJingzhuo,M,19
HUE,90
~Student()...
~Person()...
~Person()...


 请注意，main()函数必须按如下所示编写：
int main()
{
    Person p1;
    Student wjz("WangJingzhuo",'M',19,"HUE",90);
    p1.print();
    wjz.print();
    return 0;
} 

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                     
 */

#include<iostream>
#include<string>
using namespace std;

class Person{
    protected:
        string name;
        char sex;
        int age;
    public:
        //构造
        Person(string n="NoName", char s='M', int a=0):name(n),sex(s),age(a) 
        {cout << "Person()..." << endl;}
        //析构
        ~Person(){
            cout << "~Person()..." << endl;
        }
        //输出
        void print(){
            cout << name << "," << sex << "," << age << endl;
        }
};

class Student:public Person{
    private:
        string univ; //大学名称
        int score;
    public:
        //构造函数
        Student(string n, char s, int a, string un, int sc):Person(n,s,a),univ(un),score(sc) {
            cout << "Student()..." << endl;
        }
        //析构函数
        ~Student(){
            cout << "~Student()..." << endl;
        }
        void print(){
            cout << name << "," << sex << "," << age << "\n" << univ << "," << score << endl;
        }
};

int main()
{
    Person p1;
    Student wjz("WangJingzhuo",'M',19,"HUE",90);
    p1.print();
    wjz.print();
    return 0;
} 