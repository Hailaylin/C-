/**
 * @file 03_03.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-09
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */
#include<iostream>
using namespace std;

class AA{
    private:
        int a,b,c;
    public:
        AA(int sa, int sb, int sc):a(sa),b(sb),c(sc) {}
        friend int add(AA &);
};

int add(AA &p){
    return p.a+p.b+p.c;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    AA a1(a,b,c);
    cout<<add(a1)<<endl;
    
    return 0;
}