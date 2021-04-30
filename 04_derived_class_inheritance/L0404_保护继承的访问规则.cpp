/**
 * @file L0404_保护继承的访问规则.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0404        题目:保护继承的访问规则        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上的例4.4，找出程序中的问题并解决，理解保护继承的规则。

 请注意，main()函数必须按如下所示编写：
int main()
{
    Derived obj;
    obj.setall(1,2,3,4,5,6);
    obj.show();
    //cout<<"y="<<obj.y<<endl;
    cout<<"p="<<obj.p<<endl;
    
    return 0;
} 

 */

#include<iostream>
using namespace std;

class Base {
    private:
        int x;
    protected:
        int y;
    public:
        int z;
        void setx(int i) {x=i;}
        int getx() {return x;}
};

class Derived:protected Base {
    private:
        int m;
    protected:
        int n;
    public:
        int p;
        void setall(int a, int b, int c, int d, int e, int f);
        void show();
};

void Derived::setall(int a, int b, int c, int d, int e, int f) {
    //x=a;
    setx(a);
    y=b;
    z=c;
    m=d;
    n=e;
    p=f;
}

void Derived::show() {
    //cout << "x=" << x << endl;
    cout << "x=" << getx() << endl;
    cout << "y=" << y << endl;
    cout << "z=" << z << endl;
    cout << "m=" << m << endl;
    cout << "n=" << n << endl;
}

int main()
{
    Derived obj;
    obj.setall(1,2,3,4,5,6);
    obj.show();
    //cout<<"y="<<obj.y<<endl;
    cout<<"p="<<obj.p<<endl;
    
    return 0;
} 