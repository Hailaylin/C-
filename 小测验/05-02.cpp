/**
 * @file 05-02-天问1号.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */
#include<iostream>
using namespace std;

class MMars{
    protected:
        int x, y;
    public:
        MMars(int x1=0, int y1=0):x(x1),y(y1) {}
        MMars operator++(int);
        MMars operator++();
        void print();
};

void MMars::print(){
    cout << "x=" << x << ",y=" << y << endl;
}

MMars MMars::operator++(){
    x+=7;
    y+=7;
    return *this;
}

MMars MMars::operator++(int){
    MMars temp(*this);
    x+=7;
    y+=7;
    return temp;
}

int main()
{
	int a,b;
	cin>>a>>b;
	MMars m1(a,b),m2,m3;

	m2=++m1;
	m1.print();
	m2.print();
	
	m3=m1++;
	m1.print();
	m3.print();
	return 0;
}