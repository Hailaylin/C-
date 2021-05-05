/**
 * @file L1-07-天梯赛的善良.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-05
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 7-7 天梯赛的善良 (20 分)
天梯赛是个善良的比赛。善良的命题组希望将题目难度控制在一个范围内，使得每个参赛的学生都有能做出来的题目，并且最厉害的学生也要非常努力才有可能得到高分。

于是命题组首先将编程能力划分成了 10
​6
​​  个等级（太疯狂了，这是假的），然后调查了每个参赛学生的编程能力。现在请你写个程序找出所有参赛学生的最小和最大能力值，给命题组作为出题的参考。

输入格式：
输入在第一行中给出一个正整数 N（≤2×10
​4
​​ ），即参赛学生的总数。随后一行给出 N 个不超过 10
​6
​​  的正整数，是参赛学生的能力值。

输出格式：
第一行输出所有参赛学生的最小能力值，以及具有这个能力值的学生人数。第二行输出所有参赛学生的最大能力值，以及具有这个能力值的学生人数。同行数字间以 1 个空格分隔，行首尾不得有多余空格。

输入样例：
10
86 75 233 888 666 75 886 888 75 666
输出样例：
75 3
888 2
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    getchar();  //吸回车
    int cin_temp;
    vector<int> stu;
    //vector<int>::iterator i=stu.begin();
    for(int i=0; i<n; i++){
        cin >> cin_temp;
        stu.push_back(cin_temp);
    }
    sort(stu.begin(),stu.end());
    /*for(int i=0; i<n; i++){
        cout << stu[i] << endl;
    }*/
    cout << *(stu.begin()) << " " << count(stu.begin(),stu.end(), stu[0]) << endl;
    cout << *(stu.end()-1) << " " << count(stu.begin(),stu.end(), stu[n-1]) << endl;
}