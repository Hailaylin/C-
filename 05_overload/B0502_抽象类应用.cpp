/**
 * @file B0502_抽象类应用.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-29
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：B0502        题目:抽象类应用        得分：0  
  
作业提交截止时间：2021/7/6 0:00:00	 
 	
题目内容：
（1）某学校对助工同学的津贴计算规定如下：固定津贴+助工补贴*助工天数。研究生的固定津贴为1000元，每天的助工补贴是60元。本科生的固定津贴为600元，每天的助工补贴是50元（固定津贴可用参数缺省值处理）。
（2）定义学生抽象类Student，派生不同助工学生类（Graduate、UnderGraduate），编写程序求若干个助工学生的月津贴。
（3）其中学生类包含3个保护数据成员：string name;  int days; float subsidy;
          它们分别是“姓名”、“每月助工天数”、“津贴”。
（4）主函数及运行结果如下所示
运行结果：
Graduate:LiuJirui,subsidy=1000
Graduate:LiuJirui,subsidy=1360
UnderGraduate:ZhouHaolu,subsidy=600
UnderGraduate:ZhouHaolu,subsidy=1100


 请注意，main()函数必须按如下所示编写：
int main()
{
    Student *p;
    Graduate gs("LiuJirui",6);
    p=&gs;
    p->show();  //输出未加助工津贴的信息
    p->pay();   //计算月津贴：加上助工补贴
    p->show();  //输出月津贴
    
    UnderGraduate ug("ZhouHaolu",10);
    p=&ug;
    p->show();  //输出未加助工津贴的信息
    p->pay();   //计算月津贴：加上助工补贴
    p->show();  //输出月津贴

    return 0;
}
 */
#include<iostream>
//#include<string>

using namespace std;

class Student{
    protected:
        string name;
        int days;
        float subsidy;
    public:
        Student(string n1, int d1):name(n1), days(d1) {}
        virtual void show() = 0;
        virtual void pay() = 0;
};

class Graduate:public Student {
    public:
        Graduate(string n1, int d1):Student(n1, d1) {
            subsidy = 1000;
        }
        void show();
        void pay();
};

void Graduate::show(){
    cout << "Graduate:" << name << ",subsidy=" << subsidy << endl;
}

void Graduate::pay(){
    subsidy = subsidy + 60 * days;
}

class UnderGraduate : public Student {
    public:
        UnderGraduate(string n1, int d1):Student(n1, d1) {
            subsidy = 600;
        }
        void show();
        void pay();
};

void UnderGraduate::pay(){
    subsidy += 50 * days;
}

void UnderGraduate::show(){
    cout << "UnderGraduate:" << name << ",subsidy=" << subsidy << endl;
}


int main()
{
    Student *p;
    Graduate gs("LiuJirui",6);
    p=&gs;
    p->show();  //输出未加助工津贴的信息
    p->pay();   //计算月津贴：加上助工补贴
    p->show();  //输出月津贴
    
    UnderGraduate ug("ZhouHaolu",10);
    p=&ug;
    p->show();  //输出未加助工津贴的信息
    p->pay();   //计算月津贴：加上助工补贴
    p->show();  //输出月津贴

    return 0;
}
