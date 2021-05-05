/**
 * @file L1_06_吉老师的回归.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-05
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 7-6 吉老师的回归 (15 分)
曾经在天梯赛大杀四方的吉老师决定回归天梯赛赛场啦！

为了简化题目，我们不妨假设天梯赛的每道题目可以用一个不超过 500 的、只包括可打印符号的字符串描述出来，如：Problem A: Print "Hello world!"。

众所周知，吉老师的竞赛水平非常高超，你可以认为他每道题目都会做（事实上也是……）。因此，吉老师会按照顺序看题并做题。但吉老师水平太高了，所以签到题他就懒得做了（浪费时间），具体来说，假如题目的字符串里有 qiandao 或者 easy（区分大小写）的话，吉老师看完题目就会跳过这道题目不做。

现在给定这次天梯赛总共有几道题目以及吉老师已经做完了几道题目，请你告诉大家吉老师现在正在做哪个题，或者吉老师已经把所有他打算做的题目做完了。

提醒：天梯赛有分数升级的规则，如果不做签到题可能导致团队总分不足以升级，一般的选手请千万不要学习吉老师的酷炫行为！

输入格式：
输入第一行是两个正整数 N,M (1≤M≤N≤30)，表示本次天梯赛有 N 道题目，吉老师现在做完了 M 道。

接下来 N 行，每行是一个符合题目描述的字符串，表示天梯赛的题目内容。吉老师会按照给出的顺序看题——第一行就是吉老师看的第一道题，第二行就是第二道，以此类推。

输出格式：
在一行中输出吉老师当前正在做的题目对应的题面（即做完了 M 道题目后，吉老师正在做哪个题）。如果吉老师已经把所有他打算做的题目做完了，输出一行 Wo AK le。
当前做到的题数=当前跳题数+做题数
输入样例 1：
5 1
L1-1 is a qiandao problem.
L1-2 is so...easy.
L1-3 is Easy.
L1-4 is qianDao.
Wow, such L1-5, so easy.
输出样例 1：
L1-4 is qianDao.
输入样例 2：
5 4
L1-1 is a-qiandao problem.
L1-2 is so easy.
L1-3 is Easy.
L1-4 is qianDao.
Wow, such L1-5, so!!easy.
输出样例 2：
Wo AK le
 */


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    vector<string> question;
    char ques_temp[501];
    cin >> n >> m;
    getchar();
    cout.flush();   //清空缓冲区，吸回车
    for(int i=0; i<n; i++){
        cin.getline(ques_temp,500);
        string str_ques_temp(ques_temp);
        question.push_back(str_ques_temp);
    }
    int do_i=0, do_ques=m, skip_ques=0;
    for(do_i = 0; do_ques>=0 && do_i<=n; do_i++){   //i记录当前做到题的下标题号，做一个题就-一个可做题数
        if ( question[do_i].find("easy") != string::npos || question[do_i].find("qiandao") != string::npos ) {
            skip_ques++;
        }
        else {
            do_ques--;
        }
    }
    if(do_i<n){
        cout << question[do_i] << endl;
    }
    else{
        cout << "Wo AK le" << endl;
    }
    return 0;
}
