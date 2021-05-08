/**
 * @file L0410_派生类中的同名成员.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-07
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0410        题目:派生类中的同名成员        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上的例4.10，了解当派生类中定义了基类成员同名的成员时，怎样应用这些同名成员。
程序运行结果如下：
 请注意，main()函数必须按如下所示编写：
int main()
{
    UStudent stu(22116,"Zhang Zhi",95,"Computer Science");
    stu.print();
        
    return 0;
}

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                     
 */

#include<iostream>
#include<string>
using namespace std;

class Student{
    protected:
        int number;
        string name;
        double score;
    public:
        Student(int number1, string name1, double score1):number(number1), name(name1), score(score1) {}
        void print(){
            cout << "number:" << number << endl;
            cout << "name:" << name << endl;
            cout << "score:" << score << endl;
        }
};

class UStudent:public Student {
    private:
        string major;
    public:
        UStudent(int number1, string name1, double score1, string major1):Student(number1, name1, score1) {
            major = major1;
        }
        void print(){
            Student::print();
            cout << "major:" << major << endl;
        }
};

int main()
{
    UStudent stu(22116,"Zhang Zhi",95,"Computer Science");
    stu.print();

    return 0;
}