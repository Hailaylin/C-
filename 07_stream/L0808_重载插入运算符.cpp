/**
 * @file L0808_重载插入运算符.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-06-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0708        题目:重载插入运算符        得分：0  
  
作业提交截止时间：2021/6/20 0:00:00	 
 	
题目内容：
练习书上303页的例7.8，掌握重载插入运算符的方法。
程序运行结果如303页所示。
 */

#include<iostream>
using namespace std;

class Coord{
    private:
        int x,y;
    public:
        Coord(int i=0, int j=0):x(i),y(j) {}
        friend ostream &operator<<(ostream &stream, Coord &ob);
};

ostream &operator<<(ostream &stream, Coord &ob){
    stream << ob.x << "," << ob.y << endl;
    return stream;
}

int main(){
    Coord a(55,66),b(100,200);
    cout << a << b;
    return 0;
}