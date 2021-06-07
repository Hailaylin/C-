#include<iostream>
using namespace std;

template<typename T1, class T2>
class Base{
    protected:
        T1 a;
        T2 b;
    public:
        Base(T1 sa, T2 sb):a(sa),b(sb) {}
        void show();
};

class Derive:public Base<float, int>{
    private:
        int c;
    public:
        Derive(float sa=3.3, int sb=4, int sc=5):Base(sa,sb) {c=sc;}
        void show();
};

template<typename T1, class T2>
void Base<T1,T2>::show(){
    cout << "Base a=" << a << ",b=" << b << endl;
}

void Derive::show(){
    cout << "Derive a=" << a << ",b=" << b <<",c=" << c << endl;
}

int main()
{
	Base<int,int> aa(1,2);
	aa.show();
	Base<int,float> bb(3,7.7);
	bb.show();
	Base<float, char> cc(3.3,'T');
	cc.show();
	

	Derive dd(3.14,2,5),dt;
	dd.show();
	dt.show();
	
	return 0;
}