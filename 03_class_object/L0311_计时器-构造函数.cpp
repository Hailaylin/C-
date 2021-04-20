/*
	题号：L0311        题目:计时器（构造函数）        得分：0  
  
作业提交截止时间：2021/4/17 0:00:00	 
 	
题目内容：
练习书上70页的例3.11，其中对象d的两个参数从键盘上输入，其他与例题一样。
例：
（1）输入：1 20
输出：
seconds1=0
seconds2=10
seconds3=20
seconds4=80
（2）输入：3 15
输出：
seconds1=0
seconds2=10
seconds3=20
seconds4=195
*/

//试试在类外写

#include<iostream>
#include<cstdlib>
using namespace std;

class Timer{
    private:
        int seconds;
    public:
        Timer(){
            seconds = 0;
        }
        Timer(char const *t){   //要const才能不报错 warning: ISO C++ forbids converting a string constant to ‘char*
            seconds = atoi(t);  //atoi() 要引用头文件
        }
        Timer(int t){
            seconds = t;
        }
        Timer(int min, int sec){
            seconds = min * 60 + sec;
        }
        int getTime();      //获取秒数
};

int Timer::getTime(){       //类外定义
    return seconds;
}

int main(){
    int min, sec;
    cin >> min >> sec;
    Timer a;
    Timer b(10);
    Timer c("20");
    Timer d(min, sec);
    cout << "seconds1=" << a.getTime() << endl;
    cout << "seconds2=" << b.getTime() << endl;
    cout << "seconds3=" << c.getTime() << endl;
    cout << "seconds4=" << d.getTime() << endl;
}


