/**
 * @file 3-11_01_编程练习_int-float_上溢下溢.cpp
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-08
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include<iostream>
#include<cfloat>

int main()
{
    using namespace std;
    printf("int max = %d, float max = %e\n", INT_MAX, FLT_MAX);
    float tooble = 3.0e39+1.0;
    float float_underflow = FLT_MIN - 1;
    int int_upperflow = INT_MAX+1; 
    printf("int overflow = %d, float overflow = %e\n", int_upperflow, tooble);
    printf("float underflow = %e\n", float_underflow);
    return 0;    
}