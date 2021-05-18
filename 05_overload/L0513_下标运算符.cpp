/**
 * @file L0513_下标运算符.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-18
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0513        题目:运算符重载 []        得分：0  
  
作业提交截止时间：2021/5/22 0:00:00	 
 	
题目内容：
练习书上的例5.13，其中v的初始化参数从键盘上输入。
掌握[]运算符的重载方法。
例：
（1）输入：1 2 3 4
输出：
3
3
22
 请注意，main()函数必须按如下所示编写：
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    Vector4 v(a,b,c,d);
    cout<<v[2]<<endl;
    v[3]=v[2];
    cout<<v[3]<<endl;
    v[2]=22;
    cout<<v[2]<<endl;
    
    return 0;
}

 */
#include<iostream>
using namespace std;

class Vector4{
    private:
        int v[4];
    public:
        Vector4(int a, int b, int c, int d){
            v[0]=(a), v[1]=(b), v[2]=(c), v[3]=(d);
        }
        int &operator[](int const &);
};

int &Vector4::operator[](int const &s){
    if(s<0 || s>=4) {
        cout << "Bad subscript!" << endl;
        exit(1);
    }
    return v[s];
}

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    Vector4 v(a,b,c,d);
    cout<<v[2]<<endl;
    v[3]=v[2];
    cout<<v[3]<<endl;
    v[2]=22;
    cout<<v[2]<<endl;
    
    return 0;
}
