/**
 * @file 04-func-init-varlue.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-27
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include <stdio.h>
int *p;
void func(int m, int n){
    int a = 18, b = 100;
    p = &a;
}
void func2(int m, int c){
    int a=19, b=101;
}
int main(){
    int n;
    printf("%#X\n",n);
    func(10, 20);
    n = *p;
    printf("n = %d\n", n);  //输出18
    func2(11, 21);
    n = *p;
    printf("n = %d\n", n);  //输出101
    return 0;
}

/**
 * 输出
 * 
0
n = 18
n = 101

结论
违反常识的，函数调用完后数据不会销毁

参考：
遗留的错误认知
经过上面的分析可以发现，函数出栈只是在增加 esp 寄存器的值，使它指向上一个数据，并没有销毁之前的数据。前面我们讲局部变量在函数运行结束后立即被销毁其实是错误的，这只是为了让大家更容易理解，对局部变量的作用范围有一个清晰的认识。

栈上的数据只有在后续函数继续入栈时才能被覆盖掉，这就意味着，只要时机合适，在函数外部依然能够取得局部变量的值。请看下面的代码：
 */