/**
 * @file L0329_静态数据成员.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0329        题目:静态数据成员        得分：0  
  
作业提交截止时间：2021/4/28 0:00:00	 
 	
题目内容：
练习书上98页开始的例3.29，掌握：
（1）静态数据成员的定义与存储空间；
（2）静态数据成员的初始化
（3）静态数据成员的应用（作用）
程序运行结果如下图所示（其中第一行为空行）：
 */

#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string name;
        string no;
        float score;
        static float sum;
        static float aver;
        static int count;
    public:
        Student(string name1, string no1, float score);
        ~Student();
        void show();
        void show_count_sum_aver();
};

float Student::sum=0;
float Student::aver=0;
int Student::count=0;

void Student::show(){
    cout << "\nName:" << name ;
    cout << "\nNo:" << no;
    cout << "\nScore:" << score;
}

void Student::show_count_sum_aver(){
    cout << "\nNumber:" << count;
    cout << "\nAver:" << aver ;
}

Student::Student(string name1, string no1, float score1){
    name = name1;
    no = no1;
    score = score1;
    count++;
    sum+=score;
    aver=sum/count;
}

Student::~Student(){
    count--;
    sum=sum-score;
    //aver=sum/count;
}

int main(){
    Student stu1(
        "Li Ming",
        "08150201",
        90
    );
    stu1.show();
    stu1.show_count_sum_aver();
    Student stu2(
        "Zhang Wei",
        "08150202",
        89
    );
    cout << endl;
    stu2.show();
    stu2.show_count_sum_aver();
}