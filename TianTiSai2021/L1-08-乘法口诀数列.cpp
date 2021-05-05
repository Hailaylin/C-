/**
 * @file L1-08-乘法口诀数列.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-05
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 7-8 乘法口诀数列 (20 分)
本题要求你从任意给定的两个 1 位数字 a
​1
​​  和 a
​2
​​  开始，用乘法口诀生成一个数列 {a
​n
​​ }，规则为从 a
​1
​​  开始顺次进行，每次将当前数字与后面一个数字相乘，将结果贴在数列末尾。如果结果不是 1 位数，则其每一位都应成为数列的一项。

输入格式：
输入在一行中给出 3 个整数，依次为 a
​1
​​ 、a
​2
​​  和 n，满足 0≤a
​1
​​ ,a
​2
​​ ≤9，0<n≤10
​3
​​ 。

输出格式：
在一行中输出数列的前 n 项。数字间以 1 个空格分隔，行首尾不得有多余空格。

输入样例：
2 3 10
输出样例：
2 3 6 1 8 6 8 4 8 4
样例解释：
数列前 2 项为 2 和 3。从 2 开始，因为 2×3=6，所以第 3 项是 6。因为 3×6=18，所以第 4、5 项分别是 1、8。依次类推…… 最后因为第 6 项有 6×8=48，对应第 10、11 项应该是 4、8。而因为只要求输出前 10 项，所以在输出 4 后结束。
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> an;
    int a1, a2, n;
    cin >> a1 >> a2 >> n;
    //an[0]=a1, an[1]=a2;
    an.push_back(a1);
    an.push_back(a2);
    //getchar();
    string str_multi;
    int multi = 0;
    for (int i=0; i<n && n>=an.size(); ++i) {   //i为数组下标
        str_multi.clear();
        multi = an[i] * an[i+1];
        str_multi = to_string(multi);
        if(str_multi.length()==2) {     //判断乘积的位数
            an.push_back(stoi(str_multi.substr(0,1)));  //笑死我了，substr忘记写取多少位，搞得去了之后的所有位
            an.push_back(stoi(str_multi.substr(1,1)));
        }
        else if(str_multi.length()==1){
            an.push_back(stoi(str_multi.substr(0,1)));
        }
    }
    
    for(int i=0; i<n-1; i++) {
        cout << an[i] << " ";
    }
    cout << an[n-1];
    return 0;
}



