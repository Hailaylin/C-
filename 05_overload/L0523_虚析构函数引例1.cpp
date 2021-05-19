/**
 * @file L0523_虚析构函数引例1.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0523        题目:虚析构函数引例1        得分：0  
  
作业提交截止时间：2021/7/23 0:00:00	 
 	
题目内容：
练习书上的例5.23，掌握析构函数调用的顺序。
程序运行结果如下：
~D()...
~B()...

 请注意，main()函数必须按如下所示编写：
int main()
{
    D obj;
    
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
    D obj;
    
    return 0;
}