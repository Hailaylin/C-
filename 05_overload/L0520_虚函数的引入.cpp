/**
 * @file L0520_虚函数的引入.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0520        题目:虚函数的引入        得分：0  
  
作业提交截止时间：2021/7/23 0:00:00	 
 	
题目内容：
练习书上的例5.20，掌握虚函数的定义与作用。
程序运行如下：

 请注意，main()函数必须按如下所示编写：
int main()
{
    My_base mb(50,50), *mp;
    My_class mc(10,20,30);
    mp=&mb;
    mp->show();
    mp=&mc;
    mp->show(); 
    
    return 0;
}
 */
#include<iostream>
using namespace std;

class My_base{
    private:
        int a;
        int b;
    public:
        My_base(int x, int y):a(x),b(y) {}
        virtual void show(){    //基类加一个虚函数 virtual，后面的派生类默认都是虚函数，不过为了方便看，还是在派生类函数前都写上好
            cout << "My_base::show()" << endl;
            cout << a << " " << b << endl; 
        }
};

class My_class : public My_base{
    private:
        int c;
    public:
        My_class(int sa, int sb, int sc):My_base(sa,sb),c(sc) {}
        virtual void show(){
            cout << "My_class::show()" << endl;
            cout << "c=" << c << endl;
        }
};

int main()
{
    My_base mb(50,50), *mp;
    My_class mc(10,20,30);
    mp=&mb;
    mp->show();
    mp=&mc;
    mp->show(); 
    
    return 0;
}