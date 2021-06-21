#include<iostream>
using namespace std;

int main(){
    int i=0, j=1;
    int &r=i;
    r=j;
    int *p=&i;
    *p=&r; //不能将 "int *" 类型的值分配到 "int" 类型的实体
}