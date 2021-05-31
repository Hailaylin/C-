/**
 * @file 06-03.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-30
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */
#include<iostream>
using namespace std;

class Circle{
    protected:
        double r;
    public:
        virtual void show()=0;
};

class Area:public Circle{
    public:
        Area(double sr){
            r=sr;
        }
        virtual void show(){
            cout << "area=" << 3.14*r*r << endl;
        }
};

class Perimeter:public Circle{
    public:    
        Perimeter(double sr){
            r=sr;
        }
        void show(){
            cout << "Perimeter=" << 2*3.14*r << endl;
        }
};

int main()
{
	double r1,r2;
	cin>>r1>>r2;
	Circle *p;
	Area a(r1);
	p=&a;
	p->show();
	Perimeter per(r2);
	p=&per;
	p->show();
	return 0;
} 