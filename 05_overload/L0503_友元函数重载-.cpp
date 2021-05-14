/**
 * @file L0503_友元函数重载-.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-14
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0503        题目:友元函数重载“-”        得分：0  
  
作业提交截止时间：2021/5/19 0:00:00	 
 	
题目内容：
练习书上例5.3，其中对象ob1的两个参数从键盘上输入：
例：
（1）输入：50 60
（2）输出：
x=50,y=60
x=-50,y=-60

 请注意，main()函数必须按如下所示编写：
int main()
{
    int x,y;
    cin>>x>>y;
    Coord ob1(x,y),ob2;
    ob1.print();
    ob2=-ob1;
    ob2.print();
    
    return 0;
}

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                     	 
 	源程序：       
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
        friend Coord operator-(Coord &obj);
        void print();
};

Coord operator-(Coord &obj){
    Coord tmp;
    tmp.x=-obj.x;
    tmp.y=-obj.y;
    return tmp;
}

void Coord::print(){
    cout << "x=" << x << ",y=" << y << endl;
}

int main()
{
    int x,y;
    cin>>x>>y;
    Coord ob1(x,y),ob2;
    ob1.print();
    ob2=-ob1;
    ob2.print();
    
    return 0;
}