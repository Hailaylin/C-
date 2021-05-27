/**
 * @file 05-stack-overflow-attack.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-27
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 栈溢出攻击的原理？
 * http://c.biancheng.net/cpp/html/3186.html
 * 段错误的例子
 */


#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
    char str[10]={0};
    puts("Please input str number > 10 and see what happened:");
    gets(str);
    puts(str);  
    
    puts("Try to strcpy a smaller strs:");
    char strs[1]={0};
    strcpy(strs, str);
    printf("%s", strs);
    return 0;
}

/**
 * 输入17个数字可以，18个数字就完蛋，gets()肯定有问题，但是strcpy没问题了？
 */