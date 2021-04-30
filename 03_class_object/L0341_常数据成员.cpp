/**
 * @file L0341_常数据成员.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 * 题号：L0341        题目:常数据成员        得分：0  
  
作业提交截止时间：2021/5/6 0:00:00	 
 	
题目内容：
练习书上120页例3.41，理解常数据成员的性质：构造函数只能通过成员初始化列表对常数据成员进行初始化，其他任何函数都不能对该成员赋值。
思考：其他函数能不能修改该数据成员的值？
要求：年月日从键盘上输入。
例：
（1）输入：2017 5 1
输出：2017.5.1
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
            cout << year << "." << month << "." << day << endl;
        }
};

int main() {
    int year, month, day;
    cin >> year >> month >> day;
    Date d(year, month, day);
    d.showDate();
}