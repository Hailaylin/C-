#include<iostream>
using namespace std;

template<typename T>
class Base{
    protected:
        T a,b;
    public:
        Base(T sa, T sb):a(sa),b(sb) {}
        void show();
};

template<typename T>
void Base<T>::show(){
    cout << "Base a=" << a << ",b=" << b << endl;
}

class Derive:public Base<float> {
    private:
        int c;
    public:
        Derive(float sa=3.3, float sb=4.4, float sc=5):Base(sa,sb) {c=sc;}
        void show();
};

void Derive::show(){
    cout << "Derive a=" << a << ",b=" << b <<",c=" << c << endl;
}

int main()
{
	Base<int> bb(3,7);
	bb.show();

	Derive dd(3.14,2.72,5),dt;
	dd.show();
	dt.show();
	
	return 0;
}