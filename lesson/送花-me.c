/**
 * @file 送花-me.c
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-06-19
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0502C        题目:送花        得分：0  
  
作业提交截止时间：2021/6/20 0:00:00	 
 	
题目内容：
林某非常喜欢孙某，拿了一朵玫瑰花要送给孙某。孙某虽然对林某有好感，但没有别的意思，又不好意思拒绝。
思考了一下，就对林某说：“你要真心喜欢我，就给我送一个月的玫瑰花，今天1朵，明天2朵，后天4朵，大后天8朵，按这个规律送一个月如何？”
请你帮助林某计算一下：一个月（按30天算）下来，他一共要送出多少朵玫瑰花？
输出：sum=107......
 */

#include<stdio.h>
#include<math.h>
int main(){
    unsigned long long sum=0;
    int i=0;
    for(i=0; i<=29; i++){
        sum+=pow(2,i);
    } 
    printf("sum=%lld",sum);
}