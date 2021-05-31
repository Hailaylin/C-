/**
 * @file select5-static.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-10
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include<iostream>
using namespace std;

// ctrl+/ 批量注释
class Test{
    // public:
    //     Test(){a=0; c=0;}
    //     int f(int a)const {this->a = a};
    //     static int g() {return a;}
    //     void h(int b) {Test::b = b;};
    private:
        int a;
        static int b;
        const int c;
};
