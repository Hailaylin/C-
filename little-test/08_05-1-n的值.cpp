/**
 * @file 08_05-1-n的值.cpp
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
    int n,sum=0;
    cin >> n;
    for (int i=1; i<=n; i++){
        sum+=i;
    }
    cout << sum;
}