/**
 * @file L0801_显示食物清单.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-04
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0801        题目:显示食物清单        得分：0  
  
作业提交截止时间：2021/7/13 0:00:00	 
 	
题目内容：
练习书上的例8.1，“milk”等前面的空格为4个。



 */

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<string> Food;
    vector<string> ::iterator FoodIterator;
    Food.insert(Food.end(), "---food list---");
    Food.insert(Food.end(), "    milk");
    Food.insert(Food.end(), "    bluemerry");
    Food.insert(Food.end(), "    banana");
    Food.insert(Food.end(), "    avocado");
    Food.insert(Food.end(), "--------------");

    for(FoodIterator=Food.begin(); FoodIterator!=Food.end(); FoodIterator++) {
        cout << *FoodIterator << endl;
    }
}