/**
 * @file GuestNumberGame.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-06-16
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 写一个小小的猜数游戏
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int guest_count=0;
    int guest_num=0;

    //提示信息
    printf("[INFO]本猜数游戏要求猜测1~100的随机数.\n");
    printf("[INFO]猜数游戏开始，正在生成随机数……\n");

    //生成随机数num 1~100
    srand((unsigned)time(NULL));
    int num = rand()%100 + 1;
    printf("[INFO]随机数已生成.\n");

    //猜测一次
    while(guest_num!=num){
        printf("[INFO]请输入您猜测的数字(1-100):");
        scanf("%d", &guest_num);
        guest_count++;

        //判断是否猜对
        if(guest_num==num){
            break;
        }
        else{
            printf("[Warning]您猜错了！共猜测%d次.",guest_count);
            //提示大小
            if(guest_num > num) printf("猜大了!");
            else printf("猜小了!");
            printf("将重新猜数.\n");
        }
    }
    printf("[WIN!]恭喜您猜测成功!共猜测%d次.\n",guest_count);
    return 0;
}
