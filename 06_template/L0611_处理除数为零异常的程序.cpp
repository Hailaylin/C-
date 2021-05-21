/**
 * @file L0611_处理除数为零异常的程序.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-21
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include<iostream>
using namespace std;

int Div(int x, int y){
    if(0==y){
        throw y;
    }
    return x/y;
}

int main(){
    try
    {
        cout << "7/3=" << Div(7,3) << endl;
        cout << "5/3=" << Div(5,0) << endl;
    }
    catch(int)
    {
        cout << "Wrong: Diveded by zero!" << endl;
    }
    cout << "end" << endl;
}