#include <iostream>
using namespace std;

class Complex
{
 private:
 public:
 	double real,imag;
 	Complex(double real=0,double imag=0);
 	Complex(const Complex &);
 	~Complex();
 	void show();
};

Complex::Complex(double real,double imag)
{ 
	this->real=real; this->imag=imag;
	cout<<"Constructing..."<< this << " "<<real<<","<<imag<<endl;
}

Complex::Complex(const Complex &c)
{
	real=c.real; imag=c.imag;
	cout<<"Copy constructing..."<< this <<" "<<real<<","<<imag<<endl;
}

Complex::~Complex() { cout<<"Destructing..."<<this<<" "<<real<<","<<imag<<endl; }

void Complex::show()
{
	if(imag>0) cout<<real<<"+"<<imag<<"i"<<endl;
	else if(imag==0) cout<<real<<endl;
	else cout<<real<<imag<<"i"<<endl;
}

Complex add(Complex c1,Complex c2)
{
	Complex ct; 
	ct.real=c1.real+c2.real;
	ct.imag=c1.imag+c2.imag;
	return ct;
}

int main()
{
	Complex c1(2.2,3.4),c2(c1),c3;
	c3=add(c1,c2);
	c3.show(); 
	return 0;
} 