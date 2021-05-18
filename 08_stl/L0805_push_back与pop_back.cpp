/**
 * @file L0805_push_back与pop_back.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-16
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0805        题目:push_back与pop_back        得分：0  
  
作业提交截止时间：2021/7/14 0:00:00	 
 	
题目内容：
练习书上例8.5。

 */

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

const int N = 10;

int main(){
    vector<char>alphaVector;
    for(int i=0; i<N; i++){
        alphaVector.push_back(i+'1');
    }
    int size = alphaVector.size();
    vector<char>::iterator theIterator;
    for(int j=0; j<size; j++){
        alphaVector.pop_back();
        for(theIterator = alphaVector.begin(); theIterator != alphaVector.end(); theIterator++){
            cout << *theIterator;
        }
        cout << endl;
    }
    return 0;
}