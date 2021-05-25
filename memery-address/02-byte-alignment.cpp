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

int a;
char b;
int c;
double d;
char i;
int e;


int main(){
    int f;
    char g;
    int h;

    cout << "Struct:" << endl;
    cout << &Stu[0] <<endl; 
    cout << &Stu[1] <<endl<< endl;
    
    cout << "Global Variable:" << endl; 
    cout << "&a int= \t" << &a << endl;
    //printf("%p\n",&dddd);   //cout 不能输出 char dddd的地址？
    cout << "&b char=\t" << static_cast<const void *>(&b) << endl;   //转换一下类型就能输出，把char类型地址（指针）转换为无类型的地址（指针）
    //参考 http://c.biancheng.net/cpp/biancheng/view/3297.html
    cout << "&c int= \t" << &c << endl;
    cout << "&d double=\t" << &d << endl;
    cout << "&i char=\t" << static_cast<const void *>(&i) << endl;
    cout << "&e int= \t" << &e << endl << endl;

    cout << "Local Variable:" << endl;
    cout << "&f int= \t" << &f << endl;
    cout << "&g char=\t" << static_cast<const void *>(&g) << endl;
    cout << "&h int= \t" << &h << endl;
}

/** 32位编译结果
 * PS D:\Onedrive\C++\memery-address> g++ -m32 .\02-byte-alignment.cpp -o test.exe ; .\test.exe
Struct: 
0x4da020
0x4da022

Global Variable:
&a int=         0x4da024
&c int=         0x4da02c
&d double=      0x4da030
&i char=        0x4da038
&e int=         0x4da03c

Local Variable:
&f int=         0x77febc
&g char=        0x77febb
&h int=         0x77feb4
 */

/**
 * 64位编译结果
 * PS D:\Onedrive\C++\memery-address> g++ -m64 .\02-byte-alignment.cpp -o test.exe ; .\test.exe
Struct:
0x4e4030
0x4e4032

Global Variable:
&a int=         0x4e4034
&b char=        0x4e4038
&c int=         0x4e403c
&d double=      0x4e4040
&i char=        0x4e4048
&e int=         0x4e404c

Local Variable:
&f int=         0x78fe1c
&g char=        0x78fe1b
&h int=         0x78fe14
 */

//结论：无论是64位编译还是32位编译，gcc-9.2都默认以4字节对齐
//结构体对齐满足 1.结构体整体占用内存空间，不足默认对齐字长(4字节)则补足4字节，占用空间为4的整数倍 2.内存地址对齐最大数据成员所占用字节数,只有char 则地址对齐1,int 4,double 8
