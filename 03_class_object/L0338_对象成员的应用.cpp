/**
 * @file L0338_对象成员的应用.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0338        题目:对象成员的应用        得分：0  
  
作业提交截止时间：2021/5/6 0:00:00	 
 	
题目内容：
练习书上115页开始的例3.38，掌握对象成员的初始化及应用。
程序运行结果如下（第一行为空行）：
 */

#include<iostream>
using namespace std;

class Score{
    private:
        float computer;
        float english;
        float mathematics;
    public:
        Score(float c, float e, float m):computer(c), english(e), mathematics(m) {}
        void show(){
            cout << "\nComputer:" << computer;
            cout << "\nEnglish:" << english;
            cout << "\nMath:" << mathematics;
        }
};

class Student{
    private:
        string name;
        string no;
        Score score;
    public:
        Student(string n, string no1, float s1, float s2, float s3):score(s1,s2,s3){
            name = n;
            no = no1;
        }
        void show(){
            cout << "\nNaem:" << name;
            cout << "\nNo:" << no;
            score.show();
        }
};

int main(){
    Student s1("Li Xiaoming", "990201", 90, 80, 70);
    s1.show();
    cout << endl;
    Student s2("Zhang Yongsheng", "08150202", 89, 88, 87);
    s2.show();
}