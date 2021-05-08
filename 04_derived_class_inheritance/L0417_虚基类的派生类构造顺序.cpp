/**
 * @file L0417_虚基类的派生类构造顺序.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-08
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0417        题目:虚基类的派生类构造顺序        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上的列4.17，掌握虚基类的派生类的构造顺序。
程序运行如下：
 请注意，main()函数必须按如下所示编写：
int main()
{
    Derived obj(2,4,6,8);
        
    return 0;
} 

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                     	 
 */

#include<iostream>
using namespace std;

class Base{
    private:
        int a;
    public:
        Base(int sa){
            a=sa;
            cout << "Constructing Base" << endl;
        }
};

class Base1: virtual public Base{
    private:
        int b;
    public:
        Base1(int sa, int sb):Base(sa) {
            b=sb;
            cout << "Constructing Base1" << endl;
        }
};

class Base2: virtual public Base{
    private:
        int c;
    public:
        Base2(int sa, int sc):Base(sa) {
            c=sc;
            cout <<"Constructing Base2" << endl;
        }
};

class Derived: public Base1, public Base2{
    private:
        int d;
    public:
        Derived(int sa, int sb, int sc, int sd):Base(sa),Base1(sa,sb),Base2(sa,sc){
            d=sd;
            cout << "Constructing Derived" << endl;
        }
};

int main()
{
    Derived obj(2,4,6,8);
        
    return 0;
} 