/**
 * @file 06-C-memory-dynamic-allocating.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-27
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 内存泄露例子，实测能把windows整重启，操作系统没有方法关掉它，等价于一个小病毒吧
 */

#include <stdlib.h>
#include <stdio.h>
int main(){
    while(1){  //死循环
        malloc(1024);  //分配1024个字节的内存
    }
    return 0;
}