/**
 * @file 0502-strcpy-attack.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-27
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 *  strcpy() 函数导致栈溢出的例子
 * http://c.biancheng.net/cpp/html/3186.html
 *  https://app.yinxiang.com/fx/e6deb206-3e03-4282-a6dc-332b36733fd1
 * 还有几篇文章
 * 内存攻击实战笔记 - strcpy 栈溢出攻击 https://www.cnblogs.com/jackablack/p/13777264.html
 * 利用栈溢出漏洞破解口令 https://www.cnblogs.com/echoDetected/p/13787355.html
 * 这个用字符串定长的就可以……gets()获取的字符串就不行，奇怪
 * ~原文说将 str1 复制到 str2，显然超出了 str2 的接受范围，会发生溢出，覆盖返回地址，导致 main() 函数返回时出错。
 */

#include <stdio.h>
#include <string.h>
int main(){
    char *str1 = "这里是C语言中文网";
    char str2[6] = {0};
    strcpy(str2, str1);
    printf("str: %s\n", str2);
    return 0;
}