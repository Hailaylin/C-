/**
 * @file 08_02复杂的复数加法与表示.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include<iostream>
using namespace std;

class Complex{
    private:
        double real;
        double imag;
    public:
        Complex(double r=0, double i=0):real(r),imag(i) {};
        double getReal() {return real;};
        double getImag() {return imag;};
        void setReal(double r) {real=r;};
        void setImag(double i) {imag=i;};
        Complex operator+(Complex a){
            Complex tmp;
            tmp.setReal(a.getReal()+real);
            tmp.setImag(a.getImag()+imag);
            return tmp;
        }
        void print();
};

void Complex::print(){
    if(0==real){
        if(0==imag) cout<<"("<<real<<")";
        else cout<<"("<<imag<<"i)";
    }
    else{
        if(0==imag) cout<<"("<<real<<")";
        else if(imag>0) cout<<"("<<real<<"+"<<imag<<"i)";
        else if(imag<0) cout<<"("<<real<<imag<<"i)";
    }
}

int main()
{
	double a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	Complex A1(a1,a2),A2(b1,b2),A3;
	
	A3=A1+A2;
	A1.print();
	cout<<"+";
	A2.print();
	cout<<"=";
	A3.print();
       return 0;
}