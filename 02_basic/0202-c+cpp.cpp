/**
 * @file 0202-c+cpp.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-28
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * c和cpp混合编译
 * c cpp 混合编译用gcc不行，用g++ok
 * 可编译的指令
 * gcc -Wall .\0202-c+cpp.cpp .\0202-myfun.c .\0202-myfun.h -lstdc++ -o 0202.exe ; .\0202.exe
 * g++ 或者 c++ Wall .\0202-c+cpp.cpp .\0202-myfun.c .\0202-myfun.h -o 0202.exe ; .\0202.exe
 */

#include <iostream>
#include "0202-myfun.h"
using namespace std;
int main(){
   display();
   return 0;
}