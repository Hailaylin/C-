/**
 * @file L0510_深层复制.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-18
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0511        题目:深层复制        得分：0  
  
作业提交截止时间：2021/5/22 0:00:00	 
 	
题目内容：
练习书上的例5.11，理解深层复制的原因。
程序运行结果如下图所示：

 请注意，main()函数必须按如下所示编写：
int main()
{
    STRING p1("book");
    STRING p2("jeep");
    p2=p1;

    return 0;
}

 */

#include<iostream>
#include<cstring>
using namespace std;

class STRING{
    private:
        char *ptr;
    public:
        STRING(char *s){
            ptr = new char[strlen(s)+1];
            strcpy(ptr, s);
            cout << "Constructor called." << endl;
        }
        ~STRING(){
            cout << "Destructor called.---" << ptr << endl;
            delete ptr;
        }
        STRING &operator=(const STRING &);  //为什么操作符前面要加一个"&"？？？
};

STRING &STRING::operator=(const STRING &s){
    if(&s==this) return *this;
    delete ptr;                         //删除原来指针指向的内容
    ptr = new char [strlen(s.ptr)+1];   //创建一个新的指针
    strcpy(ptr,s.ptr);                  //把等号右边的对象中指针内容复制给等号左边对象的
    return *this;                       //返回指向等号左边对象的指针？
}

int main()
{
    STRING p1("book");
    STRING p2("jeep");
    p2=p1;

    return 0;
}