/**
 * @file B0503_抽象类应用2.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：B0503        题目:抽象类应用2        得分：0  
  
作业提交截止时间：2021/7/23 0:00:00	 
 	
题目内容：
（1）某学校对助工同学的津贴计算规定如下：固定津贴+助工补贴*助工天数。研究生的固定津贴为1000元，每天的助工补贴是60元。本科生的固定津贴为600元，每天的助工补贴是50元。
（2）定义学生抽象类Student，派生不同助工学生类（Graduate、UnderGraduate），编写程序求若干个助工学生的月津贴。
（3）其中学生类包含3个保护类数据成员：string name;  int days; float subsidy;
          它们分别是“姓名”、“每月助工天数”、“津贴”。
（4）主函数及运行结果如下所示

例1：
输入：TangShan 5
输出：
Graduate:TangShan,subsidy=1000
Graduate:TangShan,subsidy=1300
输入：BeiJing 6
输出：
UnderGraduate:BeiJing,subsidy=600
UnderGraduate:BeiJing,subsidy=900

例2：
输入：ZhaDa 10
输出：
Graduate:ZhaDa,subsidy=1000
Graduate:ZhaDa,subsidy=1600
输入：WangEr 20
输出：
UnderGraduate:WangEr,subsidy=600
UnderGraduate:WangEr,subsidy=1600


 请注意，main()函数必须按如下所示编写：
int main()
{
    Student *p;

    char name1[20]; 
    int day1;
    cin>>name1>>day1; //输入某研究生的姓名和助工天数 
    Graduate gs(name1,day1); //构造研究生对象 
    p=&gs;
    p->show();  //输出未加工助工津贴的信息
    p->pay();   //计算月津贴：加上助工津贴 
    p->show();  //输出本月津贴 
    
    char name2[20];
    int day2;
    cin>>name2>>day2; //输入某本科生的姓名和助工天数 
    UnderGraduate ug(name2,day2); //构造本科生对象
    p=&ug;
    p->show();  //输出未加工助工津贴的信息
    p->pay();   //计算月津贴：加上助工津贴 
    p->show();  //输出本月津贴 

    return 0;
}
 */
#include<iostream>


int main()
{
    Student *p;

    char name1[20]; 
    int day1;
    cin>>name1>>day1; //输入某研究生的姓名和助工天数 
    Graduate gs(name1,day1); //构造研究生对象 
    p=&gs;
    p->show();  //输出未加工助工津贴的信息
    p->pay();   //计算月津贴：加上助工津贴 
    p->show();  //输出本月津贴 
    
    char name2[20];
    int day2;
    cin>>name2>>day2; //输入某本科生的姓名和助工天数 
    UnderGraduate ug(name2,day2); //构造本科生对象
    p=&ug;
    p->show();  //输出未加工助工津贴的信息
    p->pay();   //计算月津贴：加上助工津贴 
    p->show();  //输出本月津贴 

    return 0;
}