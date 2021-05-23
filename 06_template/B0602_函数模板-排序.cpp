/**
 * @file B0602_函数模板-排序.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：B0602        题目:函数模板：排序        得分：0  
  
作业提交截止时间：2021/7/18 0:00:00	 
 	
题目内容：
从键盘上输入5个整数与5个实数，对它们进行从大到小排序并输出。
输出时每个数占10个字符的位置。
（1）
1 2 3 4 5 //输入
         5         4         3         2         1
2.2 3.3 4.4 5.5 1.1 //输入
       5.5       4.4       3.3       2.2       1.1

注：格式输出
#include <iomanip>
cout<<setw(6)<<a<<endl; //输出a时占6个字符位置

主函数如下所示。
 请注意，main()函数必须按如下所示编写：
int main()
{
    int a[5];
    float b[5];
    
    input(a,5);
    sort(a,5);
    output(a,5);
    input(b,5);
    sort(b,5);
    output(b,5);
} 
 */

#include<iostream>
#include<iomanip>
using namespace std;

//排序模板,写了个冒泡
template<typename T>
T sort(T *arr, int n) {
    int i,j;
    for (i=0; i<n-1; i++){
        for (j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

template<typename T>
void input(T arr[], int n) {
    for (int i=0; i<n; i++)
        std::cin >> arr[i]; 
}

template<typename T>
void output(T arr[], int n) {
    for (int i=0; i<n; i++)
        std::cout << setw(10) << arr[i];
    cout << endl; //注意输出完全后要整个回车……不然输入输出就不一样了
}

int main()
{
    int a[5];
    float b[5];
    
    input(a,5);
    sort(a,5);
    output(a,5);
    input(b,5);
    sort(b,5);
    output(b,5);
}