/**
 * @file L0416_虚基类的使用.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-08
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0416        题目:虚基类的使用        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上的例4.16，理解为什么使用虚基类，掌握虚基类的使用。

 请注意，main()函数必须按如下所示编写：
int main()
{
    Derived obj;
        
    return 0;
} 

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。  
 */


#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    public:
        Base(){
            a=5;
            cout << "Base a=" << a << endl;
        }
};

class Base1:virtual public Base{
    public: 
        Base1(){
            a=a+10;
            cout << "Base1 a=" << a << endl;
        }
};

class Base2:virtual public Base{
    public: 
        Base2(){
            a=a+20;
            cout << "Base2 a=" << a << endl;
        }
};

class Derived:public Base1, public Base2{
    public:
        Derived(){
            cout << "Derived a=" << a << endl;
        }
};
int main()
{
    Derived obj;
        
    return 0;
} 