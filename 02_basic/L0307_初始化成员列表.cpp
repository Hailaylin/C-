/*

题号：L0307        题目:成员初始化列表        得分：0  
  
作业提交截止时间：2021/4/16 0:00:00	 
 	
题目内容：
例3.7 用成员初始化列表对引用类型的数据成员和const修饰的数据成员初始化
*/

#include<iostream>
using namespace std;

class A{
    private:
        int x;
        int& rx;
        const double pi;
    public:
        A(int x1):x(x1), rx(x), pi(3.14)
        {}
        void print(){
            cout << "x=" << x << " rx=" << rx << " pi=" << pi << endl;  
        }
};

int main(){
    A a(10);
    a.print();
    return 0;
}