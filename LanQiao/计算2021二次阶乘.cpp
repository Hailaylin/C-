/**
 * @file 计算2021二次阶乘.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-09
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * eg:2021!!=1*3*5*...*2019*2021=?
 */

#include<iostream>
using namespace std;

int main(){
    long long sum=1;
    for (int i=1; i<=2021; i++){
        sum=sum*i;
        cout << "\ti=" << i << "\tsum=" << sum;
    }
    return 0;
}