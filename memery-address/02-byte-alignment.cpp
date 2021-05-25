/**
 * @file 02-byte-alignment.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-25
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 * test byte alignment for cpp.
 * a long time ago Mr. Durq asked me why will struct will use bigger memery than we think.
 * I'm ashamed that i can't match his wishes. So i am curious to know the answer.
 */

#include<iostream>
using namespace std;

struct stu{
    //int age;
    char s;
    char sex;
    //double score;

}Stu[2];

int year;
char dddd;
int bat;
double d1;
int c1;
int e1;

int main(){
    int d;
    char t;
    int c;

    cout << &Stu[0] <<endl; 
    cout << &Stu[1] << endl;
    
    cout << &year << endl;
    printf("%p\n",&dddd);   //cout 不能输出 char dddd的地址？
    cout << static_cast<const void *>(&dddd) << endl;   //转换一下类型就能输出，把char类型地址（指针）转换为无类型的地址（指针）
    //参考 http://c.biancheng.net/cpp/biancheng/view/3297.html
    cout << &bat << endl;
    cout << &d1 << endl;
    cout << &c1 << endl;
    cout << &e1 << endl;
}
