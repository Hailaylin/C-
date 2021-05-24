/**
 * @file L0812_STL通用算法count.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0812        题目:STL通用算法count()        得分：0  
  
作业提交截止时间：2021/7/19 0:00:00	 
 	
题目内容：
练习书上例8.12。
 */

#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
    int num;
    cout << "Number of students:";
    cin >> num;
    cout << "Please input the scores:" << endl;
    list<int> score;
    int sc;
    for (int i=0; i<num; i++){
        cin >> sc;
        score.insert(score.begin(), sc); 
    }
    cout << "Number of 100 is " << count(score.begin(), score.end(), 100) << endl;
}