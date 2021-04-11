/**
 * @file 6_光年天文单位转换.cpp
 * @author HailayLin (hailay@qq.com)
 * @brief 函数输入光年，返回天文单位值
 * @version 0.1
 * @date 2021-01-04
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include<iostream>
using namespace std;

int y2a(double lightYears);

int main()
{
    double lightYears;
    cout << "Enter the number of light years: ";
    cin  >> lightYears;
    cout << lightYears << " light years = " << y2a(lightYears)
         << " astronomical units." <<endl;  
    return 0;
}

int y2a(double lightYears)
{
    int ast_Unit = lightYears * 63240;
    return ast_Unit;
}