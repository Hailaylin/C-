/*
	题号：L0317        题目:对象指针的使用        得分：0  
  
作业提交截止时间：2021/4/21 0:00:00	 
 	
题目内容：
练习书上79页例3.17，其中“ob.set_a(2);”一句中的数据2从键盘输入。
体会利用指向对象的指针时访问成员函数的两种方式。
例：
（1）输入：2
输出：
2
2
2
（3）输入：3
3
3
3
*/

#include<iostream>
using namespace std;

class exe{
    private:
        int x;
    public:
        void set_a(int a){
            x = a;
        }
        void show_a(){
            cout << x << endl;
        }
};

int main(){
    exe ob;
    exe *p;
    int a;
    cin >> a;
    ob.set_a(a);
    ob.show_a();
    p=&ob;
    p->show_a();
    (*p).show_a();
}