/**
 * @file debug-file.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-12
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */
#include<stdio.h>
#include<string.h>
//#include<iostream>
//#include<cstring>
//using namespace std;
int main(){
    char arr[2][4];
    strcpy(*arr,"you");
        strcpy(arr[1],"me");
    arr[0][3]='&';
    printf("%s\n",*arr);
}