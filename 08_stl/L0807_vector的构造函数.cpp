/**
 * @file L0807_vector的构造函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-22
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0807        题目:vector的构造函数        得分：0  
  
作业提交截止时间：2021/7/15 0:00:00	 
 	
题目内容：
练习书上例8.7，其中输出时以逗号间隔。
另：输出vector容器时请尽量使用函数完成。
 */

#include<iostream>
#include<vector>
using namespace std;

template<typename T>
void vprint(vector<T> &a){
    //用了模板，函数里面不能嵌套用木板，但是又不能在函数内定义iterator...
    vector<T>::iterator i;
    for(i = a.begin(); i!=a.end(); i++){    //'i' was not declared in this scope
        cout << *i << ",";
    }
    printf("\n");
}

int main(){
    vector<int> nu(5,99);
    vprint(nu);    //cannot convert 'std::vector<int>' to 'const char*'
}