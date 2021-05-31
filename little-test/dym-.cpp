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
        Area(double ar)
        {
            r=ar;
        }
        virtual void show()
        {
            cout << "area=" << 3.14*r*r << endl;
        }
};

class Perimeter:public Circle{
    public:    
        Perimeter(double pr)
        {
            r=pr;
        }
        void show()
        {
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