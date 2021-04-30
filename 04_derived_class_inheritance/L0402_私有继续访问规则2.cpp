/**
 * @file L0402_私有继续访问规则2.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0402        题目:私有继续访问规则2        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上的例4.2，找出程序中的错误语句及错误原因，进行修改，然后再正确运行。
 请注意，main()函数必须按如下所示编写：
int main()
{
    Base op1;
    op1.seta(1);
    op1.showa();
    
    Derive1 op2;
    op2.setab(2,3);
    op2.showab();
    
    Derive2 op3;
    op3.setabc(4,5,6);
    op3.showabc();
    
    return 0;
} 
 */

#include<iostream>
using namespace std;

class Base {
    private:
        int a;
    public:
        void seta(int sa) {
            a=sa;
        }
        void showa() {
            cout << "a=" << a << endl;
        }
};

class Derive1:private Base {
    protected:
        int b;
    public:
        void setab(int sa, int sb) {
            seta(sa);
            b = sb;
        }
        void showab() {
            showa();
            cout << "b=" << b << endl;
        }
};

class Derive2:private Derive1 {
    private:
        int c;
    public:
        void setabc(int sa, int sb, int sc) {
            setab(sa, sb);
            c = sc;
        }
        void showabc() {
            showab();
            cout << "c=" << c << endl; 
        }
};

int main()
{
    Base op1;
    op1.seta(1);
    op1.showa();
    
    Derive1 op2;
    op2.setab(2,3);
    op2.showab();
    
    Derive2 op3;
    op3.setabc(4,5,6);
    op3.showabc();
    
    return 0;
} 