/**
 * @file 08_04-mul模板.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include<iostream>
using namespace std;

double mul(double a, double b){
    return a*b;
}

template<typename T>
T mul(T a,T b){
    return a*b;
}


int main()
{
    int a,b;
    double c,d;
    cin>>a>>b>>c>>d;
    cout<<mul(a,b)<<endl;
    cout<<mul<double>(c,d)<<endl;
    
    return 0;
}