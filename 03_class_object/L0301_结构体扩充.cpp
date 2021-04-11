/**
 * 题号：L0301        题目:扩充结构体（求复数的模）        得分：0  
  
作业提交截止时间：2021/7/18 0:00:00	 
 	
题目内容：
输入复数的实部与虚报，计算复数的模并输出。
例：
（1）输入：1.1 2.2 输出：2.45967
（2）输入：3 4  输出：5
*/

#include<iostream>
#include<cmath>

using namespace std;

struct Complex{
    double real;
    double imag;
    
    void init(double r, double i){
        real = r;
        imag = i;
    }

    double abscomplex(){
        double t;
        t = real * real + imag * imag;
        return sqrt(t);
    }
};

int main()
{
    Complex A;
    double r, l;
    cin>>r>>l;
    A.init(r,l);
    cout<<A.abscomplex()<<endl;
    //setw(5),不管整数还是浮点数都会被设置成5；不设置morning保留5位……
    //若是只设置浮点数, <<fixed<<setprecision(4) ? 整数也会变成保留4位小数……
    return 0;
}