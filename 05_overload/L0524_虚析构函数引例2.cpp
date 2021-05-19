/**
 * @file L0524_虚析构函数引例2.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0524        题目:虚析构函数引例2        得分：0  
  
作业提交截止时间：2021/7/23 0:00:00	 
 	
题目内容：
练习书上的例5.24，分析程序运行结果的原因。
程序运行结果为：
~B()...
 请注意，main()函数必须按如下所示编写：

int main()
{
    B *p;
    p=new D;
    delete p;
    return 0;
}
 */

#include<iostream>
using namespace std;

class B{
public:
    ~B(){
        cout << "~B()..." << endl;
    }
};

class D:public B{
public:
    ~D(){
        cout << "~D()..." << endl;
    }
};

int main()
{
    B *p;
    p=new D;
    delete p;
    return 0;
}