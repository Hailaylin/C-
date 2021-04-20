/*
	题号：L0309        题目:构造函数重载        得分：0  
  
作业提交截止时间：2021/4/17 0:00:00	 
 	
题目内容：
练习书上例3.9，其中date2对象的3个参数从键盘上输入。
运行程序如下图所示：
*/

#include<iostream>
using namespace std;

class Date{
    private:
        int year;
        int month;
        int day;
    public:
        Date(){
            year = 2016;
            month = 3;
            day = 8;
        }
        Date(int y, int m, int d){
            year = y;
            month = m;
            day = d;
        }
        void showDay(){
            cout << year << "." << month << "." << day <<endl;
        }
};

int main(){
    int y, m, d;
    Date d1;
    cout << "Date1 output:" << endl;
    d1.showDay();
    cin >> y >> m >> d;
    Date d2(y, m, d);
    cout << "Date2 output:" << endl;
    d2.showDay();
}