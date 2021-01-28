/**
 * @file 3-1_limits.cpp
 * @author HailayLin (hailay@qq.com)
 * @brief 尝试不同整型的字节数，最大能表示的数
 * @version 0.1
 * @date 2021-01-05
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    cout << "short      is " << sizeof(short)       <<"\n"
         << "int        is " << sizeof(int)         <<"\n"
         << "long       is " << sizeof(long)        <<"\n"
         << "long long  is " << sizeof(long long)   <<"\n" << endl;
    cout << "Maximum values:\n"
         << "short      :"  << SHRT_MAX <<"\n"
         << "int        :"  << INT_MAX  <<"\n"
         << "long       :"  << LONG_MAX <<"\n"
         << "long long  :"  << LLONG_MAX <<"\n" << endl;
    cout << "Minimum int values = " << INT_MIN <<"\n"
         << "Bits per byte = " << CHAR_BIT << endl;
    return 0;
}