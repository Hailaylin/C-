/**
 * @file L0403_公有继承的访问规则.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0403        题目:公有继承的访问规则        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上的例4.3，掌握公有继承的规则，找出程序中的错误及错误原因，修改程序并正确执行。
 请注意，main()函数必须按如下所示编写：
int main()
{
    Derived obj;
    obj.setxyz(30,40,50);
    obj.showxyz();
    
    //obj.y=6;
    obj.showxyz();
    
    return 0;
} 


请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                     
 */
#include<iostream>
using namespace std;

class Base {
    private:
        int x;
    protected:
        int y;
    public:
        void setxy(int sx, int sy) {
            x = sx;
            y = sy;
        }
        void showxy(){
            cout << "x=" << x << endl;
            cout << "y=" << y << endl;
        }
};

class Derived:public Base {
    private:
        int z;
    public:
        void setxyz(int sx, int sy, int sz) {
            //x = sx;
            //y = sy;
            setxy(sx, sy);
            z = sz;
        }
        void showxyz() {
            showxy();
            cout << "z=" << z << endl;
        }
};

int main()
{
    Derived obj;
    obj.setxyz(30,40,50);
    obj.showxyz();
    
    //obj.y=6;
    obj.showxyz();
    
    return 0;
} 