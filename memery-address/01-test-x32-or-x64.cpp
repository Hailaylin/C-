/**
 * @file test-x32-or-x64.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-25
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 测试一下gcc 10.2用32位编译和64位编译
 * 参考 http://c.biancheng.net/cpp/html/3188.html
 */

#include<iostream>
using namespace std;
int main (){
    int a = 100;
    int *p = &a;
    printf("看看不同输出方式的区别\n");
    printf("p=%%p=%p\ta=%%X=%X\t&c=%%#X=%#X\tsizeof(long)=%d\tsizeof(int)=%d\tsizeof(int*)=%d\n", p, &a, &a, sizeof(long), sizeof(int), sizeof(int*));
    printf("sizeof(double)=%d\tsizeof(double*)=%d\n",sizeof(double), sizeof(double*));
    return 0;
}