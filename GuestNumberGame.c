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

    //生成随机数num 1~100
    srand((unsigned)time(NULL));
    int num = rand()%100 + 1;

    //猜测一次
    char again='Y';
    while('Y'==again){
        printf("[INFO]请输入您猜测的数字(1-100):");
        scanf("%d", &guest_num);
        getchar();              //吸回车
        guest_count++;

        //判断是否猜对
        if(guest_num==num){
            printf("[WIN!]恭喜您猜测成功!😎共猜测%d次.",guest_count);
            //是否进行下一轮
            printf("是否进行下一轮😏,是or否(Y)or(N):");
            scanf("%c",&again);
            guest_count=0;  //初始化计数
            if('N'==again) break;
        }

        //猜错
        else{
            printf("[Warning]您猜错了！共猜测%d次.",guest_count);
            //提示大小
            if(guest_num > num) printf("猜大了!😅");
            else printf("猜小了!😣");
            printf("将重新猜数.\n");
        }
    }
    printf("欢迎下次光临！😊");
    return 0;
}
