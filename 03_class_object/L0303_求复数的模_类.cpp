/**
 *        C++与面向对象程序设计	 
题号：L0303        题目:求复数的模（绝对值）        得分：0  
  
作业提交截止时间：2021/7/18 0:00:00	 
 	
题目内容：
输入复数的实部与虚部（double类型），计算复数的模。（书上例3.3）
例：
（1）输入：1.1 2.2 输出：2.45967
（2）输入：3 4  输出：5
*/

#include<iostream>
#include<cmath>

using namespace std;

class Complex{
    private:
        double real;
        double imag;
    
    public:
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
    return 0;
}