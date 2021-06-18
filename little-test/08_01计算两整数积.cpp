/**
 * @file 08_01计算两整数积.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    cout << a << "*" ;
    if(b<0) cout << "(" << b << ")";
    else cout << b ; 
    cout <<"=" <<a*b << endl;
}