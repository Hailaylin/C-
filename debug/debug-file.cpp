#include<iostream>
using namespace std;

template<typename T>
class Base{
    protected:
    T a,b;
    public:
    Base(T x=0,T y=0);
    void show();
};

template<typename T>
Base<T>::Base(T x,T y)
{
    a=x;b=y;
}

template<typename T>
void Base<T>::show()
{
    cout<<"Base a="<<a<<","<<"b="<<b<<endl;
}

class Derive:public Base<float>{
    protected:
    float c;
    public:
    Derive(float x=3.3,float y=4.4):Base(x,y) {c=5.5;};
    void show();
};


void Derive::show()
{
    cout<<"Derive a="<<a<<",b="<<b<<",c="<<c<<endl;
}

int main()
{
    Base<int> bb(3,7);
    bb.show();

    Derive dd(3.14,2.72),dt;
    dd.show();
    dt.show();
    
    return 0;
}
