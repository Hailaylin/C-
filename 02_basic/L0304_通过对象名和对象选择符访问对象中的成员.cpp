/**
题号：L0304        题目:通过对象名和对象选择符访问对象中的成员        得分：0  
  
作业提交截止时间：2021/4/15 0:00:00	 
 	
题目内容：
例3.4，其中op1与op2的参数从键盘输入。
例：
（1）输入：1 2 3 4
输出：
op1 i=1 j=2
op2 i=3 j=4

*/

#include<iostream>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        void setpoint(int ob1, int ob2){
            x=ob1;
            y=ob2;
        }
        int getx(){
            return x;
        }
        int gety(){
            return y;
        }
};

int main(){
    int ob1, ob2, ob3, ob4;
    cin >> ob1 >> ob2;
    cin >> ob3 >> ob4;
    Point obj1, obj2;
    obj1.setpoint(ob1, ob2);
    obj2.setpoint(ob3, ob4);
    cout << "op1 i=" << obj1.getx() << " j=" << obj1.gety() << endl;
    cout << "op2 i=" << obj2.getx() << " j=" << obj2.gety() << endl;
}