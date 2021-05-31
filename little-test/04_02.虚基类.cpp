/**
 * @file 04_02.虚基类.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-16
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include <iostream>
using namespace std;
class Base
{
protected:
    int x;

public:
    Base(int x1) : x(x1) { cout << "Base()..." << endl; }
    void print()
    {
        cout << "x=" << x << endl;
    }
};
class Base1 : virtual public Base
{
public:
    Base1(int x1) : Base(x1) { cout << "Base1()..." << endl; }
};
class Base2 : virtual public Base
{
public:
    Base2(int x1) : Base(x1) { cout << "Base2()..." << endl; }
};

class Derive : public Base1, public Base2
{
public:
    Derive(int x1) : Base(x1), Base1(x1), Base2(x1)
    {
        cout << "Derive()..." << endl;
    }
};
int main()
{
    Base1 b1(1);
    b1.print();
    Base2 b2(2);
    b2.print();
    Derive d(3);
    d.print();
    return 0;
}