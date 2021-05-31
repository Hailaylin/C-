#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int days;
    float subsidy;

public:
    Student(string n1, int d1,float s1=0) : name(n1), days(d1),subsidy(s1) {}
    virtual void show() = 0;
    virtual void pay() = 0;
};

class Graduate : public Student
{
public:
    Graduate(string n1, int d1,float s1=1000) : Student(n1,d1,s1){};
    void show();
    void pay();
};

void Graduate::show()
{
    cout << "Graduate:" << name << ",subsidy=" << subsidy << endl;
}

void Graduate::pay()
{
    subsidy = subsidy + 60 * days;
}

class UnderGraduate : public Student
{
public:
    UnderGraduate(string n1, int d1,float s1=600) : Student(n1,d1,s1){};
    void show();
    void pay();
};

void UnderGraduate::pay()
{
    subsidy += 50 * days;
}

void UnderGraduate::show()
{
    cout << "UnderGraduate:" << name << ",subsidy=" << subsidy << endl;
}