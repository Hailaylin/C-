/**
 * @file L0408_含有对象成员的派生类.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-02
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0408        题目:含有对象成员的派生类        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上的例4.8，掌握含有对象成员的派生类构造函数与析构函数的执行顺序。
程序运行结果如下：

 请注意，main()函数必须按如下所示编写：
int main()
{
    Derived obj(5);
    obj.show();        
    return 0;
} 

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                     	 
 */
#include<iostream>
using namespace std;

class Base {
    private:
        int x;
    public:
        Base(int i):x(i) {
            cout << "Constructing class Base." << endl;
        }
        ~Base(){
            cout << "Destructing class Base." << endl;
        }
        void show(){
            cout << "x=" << x << endl;
        }
};

class Derived:public Base {
    private:
        Base b;
    public:
        Derived(int i):Base(i), b(i) {
            cout << "Constructing derived class." << endl;
        }
        ~Derived() {
            cout << "Destructing derived class." << endl;
        }
};

int main()
{
    Derived obj(5);
    obj.show();        
    return 0;
}