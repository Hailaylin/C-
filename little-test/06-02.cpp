/**
 * @file 06-02.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-30
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */
#include<iostream>
using namespace std;

class HArray{
    private:
        int m_a[3];
    public:
        HArray(int a, int b, int c){
            m_a[0]=a;
            m_a[1]=b;
            m_a[2]=c;
        }
        int operator[](int);
};

int HArray::operator[](int script){
    return m_a[script]*m_a[script];
}

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	HArray h1(a,b,c);
	int d=h1[0]+h1[2];
	cout<<d<<endl;
	return 0;
} 