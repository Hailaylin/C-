/**
 * @file 08_03-长方形输出长宽.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include<iostream>
using namespace std;

class Rectangle{
    private:
        double a,b;
    public:
        Rectangle(double sa=0, double sb=0):a(sa),b(sb) {};
        void show();
};

void Rectangle::show(){
    cout << "(" << a << "," << b << ")" << endl;
}

int main()
{
	double a,b;
	cin>>a>>b;
	Rectangle r1,r2(a,b);
	r1.show();
	r2.show();
	return 0;
}