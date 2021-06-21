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

    //猜测一次'
    while(guest_num!=num){
        printf("[INFO]请输入您猜测的数字(1-100):");
        scanf("%d", &guest_num);
        getchar();              //吸回车
        guest_count++;

        //判断是否猜对
        if(guest_num==num){
            printf("[WIN!]恭喜您猜测成功!😎共猜测%d次.",guest_count);
            break;
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