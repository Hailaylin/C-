/**
 * 	       C++与面向对象程序设计	 
题号：L0105        题目:cin cout使用        得分：0  
  
作业提交截止时间：2021/7/18 0:00:00	 
 	
题目内容：
输入姓名与年龄，并输出，要求年龄占5个字符的位置。
提示：
（1）输入的字符串带空格时，需要使用 cin.getline()，自己可以上网查一下使用方法。
（2）输出时占用字符位置设置方法：
   #include <iomanip>
   cout<<setw(6)<<a<<endl; //输出时a变量值占6个字符位置

例：
（1）
Please enter your name and age:
Ding xintong  //输入
22 //输入
name:Ding xintong,age=   22
*/

#include<iomanip>
#include<iostream>

using namespace std;

int main() {
    char name[66];
    int age;
    cout << "Please enter your name and age:"<<endl;
    cin.getline(name, 66);
    cin >> age;
    cout <<"name:"<< name <<",age="<<setw(5)<<age<<endl;
    return 0;   
}