/**
 * @file 03-stack-overflow.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-25
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include<iostream>
using namespace std;

int main(){
    char str[1024*1024]={0};
    cout << "233" << endl;
    return 0;
}