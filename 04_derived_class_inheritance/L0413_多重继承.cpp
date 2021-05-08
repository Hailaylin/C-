/**
 * @file L0413_多重继承.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-07
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0413        题目:多重继承        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上的例4.13，分析165页中main函数中显示错误的语句，通过访问声明修改它们的属性，使程序能够正常运行。
运行结果如下：
a=3
b=4
b=8
c=6
 请注意，main()函数必须按如下所示编写：
int main()
{
    Z obj;
    obj.setX(3);
    obj.showX();
    obj.setY(4);
    obj.showY();
    obj.setZ(6,8);
    obj.showZ();
        
    return 0;
} 

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                     
 */

#include<iostream>
using namespace std;

class X{
    private:
        int a;
    public:
        void setX(int x){
            a = x;
        }
        void showX(){
            cout << "a=" << a << endl;
        }
};

class Y{
    private:
        int b;
    public:
        void setY(int y){
            b = y;
        }
        void showY(){
            cout << "b=" << b << endl;    
        }
};

class Z:public X, private Y{
    private:
        int c;
    public:
        Y::setY;
        Y::showY;
        void setZ(int z, int y){
            c = z;
            setY(y);
        }
        void showZ(){
            showY();
            cout << "c=" << c << endl;
        }
};

int main()
{
    Z obj;
    obj.setX(3);
    obj.showX();
    obj.setY(4);
    obj.showY();
    obj.setZ(6,8);
    obj.showZ();
        
    return 0;
} 