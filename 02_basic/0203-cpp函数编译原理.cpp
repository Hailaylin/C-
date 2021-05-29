/**
 * @file 0203-cpp函数编译原理.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-28
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include <iostream>
using namespace std;
void display();
void display(int);
namespace ns{
    void display();
}
class Demo{
public:
    void display();
};
int main(){
    display();
    display(1);
    ns::display();
    Demo obj;
    obj.display();
    return 0;
}