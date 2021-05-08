/**
 * @file L0418_虚基类应用举例.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-08
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0418        题目:虚基类应用举例        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上的例4.18，程序运行结果如下：

 请注意，main()函数必须按如下所示编写：
int main()
{
    E_Student my_E_Student("WangYue",'f',35,"Computer",95,"Teaching Affaires Office",3500);
    my_E_Student.print(); 
        
    return 0;
}

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。  
 */

#include<iostream>
using namespace std;

int main()
{
    E_Student my_E_Student("WangYue",'f',35,"Computer",95,"Teaching Affaires Office",3500);
    my_E_Student.print(); 
        
    return 0;
}