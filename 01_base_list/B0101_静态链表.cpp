/**
 *   C++与面向对象程序设计	 
题号：B0101        题目:静态链表        得分：0  
  
作业提交截止时间：2021/7/22 0:00:00	 
 	
题目内容：
创建静态链表并输出。
观察C++中的输出与C语言的输出的区别。
*/

#include<iostream>

using namespace std;

struct Student {
    int     num;
    float   score;
    struct Student *next;
};

int main()
{
    struct Student a, b, c, *head, *p;
    a.num=10101; a.score=89.5;
    b.num=10103; b.score=90;
    c.num=10107; c.score=85;

    head=&a;
    a.next=&b;
    b.next=&c;
    c.next=NULL;

    p=head;
    do{
        cout<< p->num << "," <<p->score << endl;
        p = p->next;
    } while (p!=NULL);

    return 0;
}

