/**
 * @file L0820_set关联式容器.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-24
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0820        题目:set关联式容器        得分：0  
  
作业提交截止时间：2021/7/1 0:00:00	 
 	
题目内容：
先练习书上例8.20，完成如下功能：
从键盘上输入若干个字符串，直到输入“000”为至，将除“000”之外的所有字符串添加到set关联式容器中，输出容器中的所有元素的值。
例1：
输入：
rose
tulip
hyacinyh
rose
jasmine
lily
sunflower
000
输出：
hyacinyh
jasmine
lily
rose
sunflower
tulip

 */

#include<set>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

void print(string a){
    cout << a << endl;
}

int main(){
    set<string> flower;
    string in;  //不能放入循环内，while(in)会报错……string in 不存在
    do{
        cin >> in;
        flower.insert(in);
    }while(in!="000");
    flower.erase("000");    //直接删除特定元素，好得很
    for_each(flower.begin(), flower.end(), print);
}