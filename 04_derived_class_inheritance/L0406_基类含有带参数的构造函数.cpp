/**
 * @file L0406_基类含有带参数的构造函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0406        题目:基类含有带参数的构造函数        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上的例4.6，掌握当基类含有带参数的构造函数时，派生类的构造函数的构造方法。其中对象stu构造时的参数从键盘上输入。
例：
（1）输入：
1012
陈志浩
95
计算机

输出：
number:1012
name:陈志浩
score:95
major:计算机
 请注意，main()函数必须按如下所示编写：
int main()
{
    int num;
    string name;
    int score;
    string major;
    cin>>num>>name>>score>>major;
    UStudent stu(num,name,score,major);
    stu.print1();
        
    return 0;
} 
 */
#include<iostream>
#include<string>

using namespace std;

class Student {
    protected:
        int number;
        string name;
        float score;
    public:
        Student(int num, string name1, float score1):number(num), name(name1), score(score1) {}
};

class UStudent:public Student {
    private:
        string major;
    public:
        UStudent(int num, string name1, float score1, string major1):Student(num,name1,score1) {
            major = major1;
        }
    void print1();
};

void UStudent::print1() {
    cout << "number:" << number << endl;
    cout << "name:" << name << endl;
    cout << "score:" << score << endl;
    cout << "major:" << major << endl;
}

int main()
{
    int num;
    string name;
    int score;
    string major;
    cin>>num>>name>>score>>major;
    UStudent stu(num,name,score,major);
    stu.print1();
        
    return 0;
} 