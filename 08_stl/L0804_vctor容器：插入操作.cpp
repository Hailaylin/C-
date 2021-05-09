/**
 * @file L0804_vctor容器：插入操作.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-08
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0804        题目:vctor容器：插入操作        得分：0  
  
作业提交截止时间：2021/7/14 0:00:00	 
 	
题目内容：
练习书上例8.4，输出时以逗号间隔。
 */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> intVector;
    for(int i=0; i<10; i++){
        intVector.push_back(i+10);
    }
    vector<int>::iterator theIterator = intVector.begin();
    cout << "vector1:" << endl;
    for(;theIterator!=intVector.end(); theIterator++){
        cout << *theIterator << ",";
    }
    intVector.insert(intVector.end(), 4, 5);
    cout <<endl<< "vector2:" << endl;
    for(theIterator=intVector.begin(); theIterator!=intVector.end(); theIterator++){
        cout << *theIterator << ",";
    }
    cout << endl;
}

