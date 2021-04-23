/**
 * @file 0306_长方体类.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：0306        题目:长方体类        得分：0  
  
作业提交截止时间：2021/4/23 23:00:00	 
 	
题目内容：
创建一个长方体类，数据成员至少包括长、宽、高，分别命名为length width height。
要求用成员函数完成如下功能：
（1）从键盘上输入长、宽、高。
（2）计算长方体的体积与表面积。
（3）输出长方体的体积与表面积。

例：
1.1 2.2 3.3 
area=26.62,volume=7.986

 请注意，main()函数必须按如下所示编写：
int main()
{
    Cuboid cc;
        float a,b,c;
        cin>>a>>b>>c;
    cc.set_value(a,b,c);
    cc.count_area();
    cc.count_volume();
    cc.show();
    return 0;
}
 */
#include<iostream>
using namespace std;
class Cuboid{
    private:
       float length , width , height;
       float area, volume;
    public:
        void set_value(float a, float b, float c){
            length = a;
            width = b;
            height = c;
        }
        void count_area(){
            area = 2*(length*width + length*height + width*height);
        }
        void count_volume(){
            volume = length * width * height;
        }
        void show(){
            cout << "area=" << area << ",volume=" << volume << endl;
        }
};

int main()
{
    Cuboid cc;
        float a,b,c;
        cin>>a>>b>>c;
    cc.set_value(a,b,c);
    cc.count_area();
    cc.count_volume();
    cc.show();
    return 0;
}