/**
 * @file std-input.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-09
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include<iostream>

int main(){
    int n, sum=0;
    std::cin >> n;
    for(int i=0; i<n; i++){
        std::cin >> i;
        sum+=i;
    }

    
    std::cout << sum << std::endl;
}