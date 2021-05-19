/**
 * @file L0518_转换构造函数与类型转换函数的综合应用.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0518        题目:转换构造函数与类型转换函数的综合应用        得分：0  
  
作业提交截止时间：2021/7/23 0:00:00	 
 	
题目内容：
练习书上例5.18。
程序运行如下：
real=5,imag=5
 请注意，main()函数必须按如下所示编写：
int main()
{
    Complex com1(1.1,2.2),com2(3.3,4.4),com3;
    com3=com1+com2;
    com3.print();
    
    return 0;
}
 */

#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
        Complex(){}
        Complex(int r, int i):real(r),imag(i) {}
        Complex(int i){
            real = imag = i/2;
        }
        operator int(){
            return real+imag;
        }
        void print();
};

void Complex::print(){
    cout << "real=" << real << ",imag=" << imag << endl;
}

int main()
{
    Complex com1(1.1,2.2),com2(3.3,4.4),com3;
    com3=com1+com2;
    com3.print();
    
    return 0;
}