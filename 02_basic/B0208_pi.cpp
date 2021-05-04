/**
 * @file B0208_求π的近似值.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-03
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：B0208        题目:求π的近似值        得分：0  
  
作业提交截止时间：2021/5/10 0:00:00	 
 	
题目内容：
按照下图公式求π的近似值：直到发现某一项的绝对值小于10的-6次为止（该项不累加）。
计算时，每一项的值及总和使用double类型，输出时保留5位小数。

输出：PI=3.14159

 */

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double term=1, sum=0, pi=0, end=1e-6, fm=1;
    for (int i=0; abs(term)>=end ; i++, fm+=2) {
        term = pow(-1,i) / fm;
        sum+=term;
    }
    pi=4*sum;
    cout << "PI=" << pi << endl;
}