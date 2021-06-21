#include<stdio.h>
#include<math.h>
int main(){
    int num=1000, i;
    for(i=2; i<=1000; i++){
        num = pow( (i%1000)/100 ,3) + pow((i%100)/10,3)+pow((i%10),3);
        if (num == i) printf("%d ",i);
    }
}