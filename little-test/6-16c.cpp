#include<iostream>
using namespace std;

class Base{
    public:
        void print(){cout << 'B';}
};

class Derived:public Base{
    public:
        void print() {cout << 'D';}
};

int main(){
    Derived *pd = new Derived();
    Base *pb = pd;
    pb->print();
    pd->print();
    delete pd;
}