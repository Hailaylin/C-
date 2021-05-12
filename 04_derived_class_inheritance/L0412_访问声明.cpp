/**
 * @file L0411_访问声明.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-07
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0412        题目:访问声明        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上的例4.12，了解访问声明的作用。

 请注意，main()函数必须按如下所示编写：
int main()
{
    B b(10,20);
    b.print();
        
    return 0;
} 

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                     
 */
#include<iostream>
using namespace std;

class A{
    private:
        A(){}
        int x=0;
    public:
        A (int x1){
            x=x1;
        }
        void print(){
            cout << "x=" << x; 
        }
};

class B: private A{
    private:
        int y;
    public:
        B(int x1, int y1) :A(x1) {
            y=y1;
        }
        A::print; //A::print() 不允许使用限定名
};


int main()
{
    B b(10,20);
    b.print();
        
    return 0;
} 