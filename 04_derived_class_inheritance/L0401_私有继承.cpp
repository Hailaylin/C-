/**
 * @file L0401_私有继承.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0401        题目:私有继承        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上例4.1，先根据书上程序进行编辑和编译，查看错误的地方并了解错误的原因，然后再按照书上所写进行相应修改，并正确运行。
 请注意，main()函数必须按如下所示编写：
int main()
{
    Derived obj;
    obj.setxy(20,30);
    obj.showxy();
        return 0;
} 

 */
#include<iostream>
using namespace std;

class Base {
    private:
        int x;
    public:
        void setx(int x1) {
            x=x1;
        }
        void showx() {
            cout << x << endl;
        }  
};

class Derived:private Base{
    private:
        int y;
    public:
        void setxy(int i, int n) {
            setx(i);
            y=n;
        }
        void showxy(){
            showx();
            cout << y << endl;
        }
    
};

int main()
{
    Derived obj;
    obj.setxy(20,30);
    obj.showxy();
        return 0;
} 