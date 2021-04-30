/**
 * @file L0342_常成员函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0342        题目:常成员函数        得分：0  
  
作业提交截止时间：2021/5/6 0:00:00	 
 	
题目内容：
练习书上121页的例3.42，掌握常成员函数的定义与性质：
（1）常成员函数可以访问常数据成员，也可访问普通数据成员。
（2）常对象只能调用它的常成员函数，而不能调用普通成员函数。
（3）常成员函数不能更新对象的数据成员，也不能调用该类中的普通成员函数。
程序运行结果如书上122页所示。

 */

#include<iostream>
using namespace std;

class Date {
    private:
        const int year;
        const int month;
        const int day;
    public:
        Date(int y, int m, int d):year(y), month(m), day(d) { }
        void showDate(){
            cout << "showDate1:" << endl;
            cout << year << "." << month << "." << day << endl;
        }
        void showDate() const;
};

void Date::showDate() const {
    cout << "showDate2:" << endl;
    cout << year << "." << month << "." << day << endl;
}

int main() {
    Date d1(1998,4,28);
    d1.showDate();
    const Date d2(2002,11,14);
    d2.showDate();
}