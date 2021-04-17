/*

	题号：L0306        题目:不带参数的构造函数        得分：0  
  
作业提交截止时间：2021/4/16 0:00:00	 
 	
题目内容：
例3.6，其中init函数的参数从键盘输入。
例：
（1）输入：1.1 2.2 输出：2.45967

*/

#include<iostream>
#include<cmath>
using namespace std;

class Complex{
    private:
        double real;
        double imag;
    public:
        Complex(){
            real = 0;
            imag = 0;
        }
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
    double a, b;
    Complex com;
    cin >> a >> b;
    com.init(a,b);
    cout<< com.abscomplex() << endl;
}