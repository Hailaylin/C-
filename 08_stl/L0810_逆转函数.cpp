/**
 * @file L0810_逆转函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0810        题目:逆转函数        得分：0  
  
作业提交截止时间：2021/7/15 0:00:00	 
 	
题目内容：
练习书上的例8.10。
例：（1）输入：1 2 3
输出：
List...
2
1
3
After reversing...
3
1
2
 请注意，main()函数必须按如下所示编写：
int main()
{
    list<int>number;
    inputList(number);
    
    cout<<"List..."<<endl;
    printList(number);
    
    number.reverse();
    cout<<"After reversing..."<<endl;
    printList(number);
    
    return 0;
}
 */
#include<iostream>
#include<list>
using namespace std;

void inputList(list<int> &arr){
    int a, b, c;
    cin >> a >> b >> c;
    arr.insert(arr.begin(), a);
    arr.insert(arr.begin(), b);
    arr.insert(arr.end(), c);
}

void printList(list<int> &arr){
    list<int>::iterator i;
    for (i = arr.begin(); i!=arr.end(); i++)
        cout << *i << endl;
}

int main()
{
    list<int>number;
    inputList(number);
    
    cout<<"List..."<<endl;
    printList(number);
    
    number.reverse();
    cout<<"After reversing..."<<endl;
    printList(number);
    
    return 0;
}
