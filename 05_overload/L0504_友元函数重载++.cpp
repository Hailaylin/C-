/**
 * @file L0504_友元函数重载“++”.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-14
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0504        题目:友元函数重载“++”        得分：0  
  
作业提交截止时间：2021/5/19 0:00:00	 
 	
题目内容：
练习书上的例5.4，其中ob的两个参数从键盘上输入。
例：
（1）输入： 10 20
输出：
x:10,y:20
x:11,y:21
x:12,y:22
 请注意，main()函数必须按如下所示编写：
int main()
{
    int a,b;
    cin>>a>>b;
    Coord ob1(a,b);
    ob1.print();
    ++ob1;
    ob1.print();

    operator++(ob1);
    ob1.print();
    
    return 0;
}

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                   
 */

#include<iostream>
using namespace std;

class Coord{
    private:
        int x;
        int y;
    public:
        //构造
        Coord(int x1=0, int y1=0):x(x1),y(y1) {}
        //友元函数重载-
        friend Coord operator++(Coord &obj);
        void print();
};

Coord operator++(Coord &obj){
    ++obj.x;
    ++obj.y;
    return obj;
}

void Coord::print(){
    cout << "x:" << x << ",y:" << y << endl;
}

int main()
{
    int a,b;
    cin>>a>>b;
    Coord ob1(a,b);
    ob1.print();
    ++ob1;
    ob1.print();

    operator++(ob1);
    ob1.print();
    
    return 0;
}