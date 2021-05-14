/**
 * @file L0418_虚基类应用举例.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-08
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0418        题目:虚基类应用举例        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上的例4.18，程序运行结果如下：

 请注意，main()函数必须按如下所示编写：
int main()
{
    E_Student my_E_Student("WangYue",'f',35,"Computer",95,"Teaching Affaires Office",3500);
    my_E_Student.print(); 
        
    return 0;
}

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。  
 */

#include<iostream>
#include<string>
using namespace std;

class Data_rec{
    protected:
        string name;
        char sex;
        int age;
    public:
        Data_rec(string n1, char s1, int a1):name(n1),sex(s1),age(a1) {}
};

class Student:virtual public Data_rec{
    protected:
        string major;
        double score;
    public:
        Student(string name1, char sex1, int age1, string major1, double score1):Data_rec(name1,sex1,age1){
            major=major1;
            score=score1;
        }
};

class Employee:virtual public Data_rec{
    protected:
        string dept;
        double salary;
    public:
        Employee(string name1, char sex1, int age1, string dept1, double salary1):Data_rec(name1, sex1, age1){
            dept=dept1;
            salary=salary1;
        }
};

class E_Student: public Employee, public Student{
    public:
        E_Student(string name1, char sex1, int age1, string major1, double score1, string dept1, double salary1):Data_rec(name1, sex1, age1),Student(name1,sex1,age1,major1,score1),Employee(name1, sex1, age1, dept1, salary1) {}
        void print();
};

void E_Student::print(){
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
    cout << "age:" << age << endl;
    cout << "score:" << score << endl;
    cout << "major:" << major << endl;
    cout << "dept:" << dept << endl;
    cout << "salary:" << salary << endl; 
}

int main()
{
    E_Student my_E_Student("WangYue",'f',35,"Computer",95,"Teaching Affaires Office",3500);
    my_E_Student.print(); 

    return 0;
}