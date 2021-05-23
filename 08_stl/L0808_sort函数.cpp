/**
 * @file L0808_sort函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-22
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0808        题目:sort函数        得分：0  
  
作业提交截止时间：2021/7/15 0:00:00	 
 	
题目内容：
练习书上例8.8，输出元素时：先输出一个空格，再输出元素的值。
 请注意，main()函数必须按如下所示编写：
int main()
{
    vector<int> number;
    insert(number);  //利用头插法插入5个元素 
    cout<<"Before sorting..."<<endl;
    vprint(number);
    vsort(number);
    cout<<"After sorting..."<<endl;
    vprint(number);
    return 0;
}
 */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 元素量为5、插入1~5的元素
const int N = 5;

//输出向量中整数
void vprint(vector<int> &a){
    vector<int>::iterator i;
    for(i = a.begin(); i!=a.end(); i++){
        cout << " " << *i;
    }
    printf("\n");
}

//头插元素
void insert(vector<int> &nu){
    int num;
    for (int i=0; i<N; i++){
        cin >> num; 
        nu.insert(nu.begin(), num);
    }
}

// 排序
void vsort(vector<int> &nu){
    sort(nu.begin(), nu.end());
}

int main()
{
    vector<int> number;
    insert(number);  //利用头插法插入5个元素 
    cout<<"Before sorting..."<<endl;
    vprint(number);
    vsort(number);
    cout<<"After sorting..."<<endl;
    vprint(number);
    return 0;
}