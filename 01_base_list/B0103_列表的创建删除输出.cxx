/*
题号：B0103        题目:链表中结点的删除        得分：0  
  
作业提交截止时间：2021/7/24 0:00:00	 
 	
题目内容：
练习链表的创建、输出与删除（在B0102基础上进行修改）：
例：
（1）
输入：0 0
输出：
Empty!
Empty! Not found!
Empty!
（2）
输入：
1 90
2 89
3 97
0 0
输出：
Scores are:
num:1,score:90.00
num:2,score:89.00
num:3,score:97.00
Please input the number you want to delete:
输入：2
输出：
num:2 deleted!
Scores are:
num:1,score:90.00
num:3,score:97.00
（3）
输入：
1 90
2 89
3 89
0 0
输出：
Scores are:
num:1,score:90.00
num:2,score:89.00
num:3,score:89.00
Please input the number you want to delete:
输入：1
输出：
num:1 deleted!
Scores are:
num:2,score:89.00
num:3,score:89.00
（4）
输入：
1 90
2 91
6 98
0 0
输出：
Scores are:
num:1,score:90.00
num:2,score:91.00
num:6,score:98.00
Please input the number you want to delete:
输入：3
输出：
Not found!
Scores are:
num:1,score:90.00
num:2,score:91.00
num:6,score:98.00
 请注意，main()函数必须按如下所示编写：
int main()
{
     struct Student *creat(); //创建链表 
     void print(struct Student *head); //遍历链表 
     struct Student *delNode(struct Student *);//删除链表中的一个结点 
 
     struct Student *pt;
     pt=creat();
     print(pt);
     pt=delNode(pt);
     print(pt);
 
     return 0;
}
 * 已知问题 num输入0会删除尾结点，鲁棒性不行
*/
#include<iostream>
#include<cstdlib>

struct Student
{
    int num;
    float score;
    struct Student *next;
};

typedef struct Student list;

//创建节点，无参数，返回头指针
struct Student *creat(void)
{
    //创建节点。
    list *node = (list *)malloc(sizeof(list));
    list *head = node; 
    scanf("%d %f", &node->num, &node->score);
    //结束创建1节点
    if(0 == node->num){
        puts("Empty!");
        return NULL;
    }
    //到0结束创建
    while (node->num){
        list *last = (list *)malloc(sizeof(list));  //下一个节点
        node->next = last;
        node = last;
        scanf("%d %f", &node->num, &node->score);
    }
    node->next = NULL;
    return head;
}

//遍历链表
void print(struct Student *head)
{
    if (head == NULL){
        printf("Empty!");
    }
    //逻辑问题——>void返回类型函数用if else 控制逻辑
    else{
        puts("Scores are:");
        struct Student *p=head;
        while (p->next != 0){
            printf("num:%d,score:%.2f\n", p->num, p->score);
            p=p->next;
        }
    }
}

//删除节点
struct Student *delNode(struct Student *head){
    int nodenum = 0;
    //空节点情况
    if (!head) {
        printf(" Not found!\n");
        return NULL;
    }
    else {
        //非空节点，判定要删的节点是否为头结点
        puts("Please input the number you want to delete:");
        scanf("%d", &nodenum);
        if (1 == nodenum) {     //要删的为头结点
            list *head_next = head->next;
            printf("num:%d deleted!\n", head->num);
            free(head);
            return head_next;
        }
        else if (0 == nodenum){ //0号节点未定义，就定义没有此节点
            //没找到的情况
            puts("Not found!");
            return head;
        }

        list *pre = head;
        list *node = pre->next;

        //遍历寻找节点，注意num编号不是连续的……
        while (node) {
            //找到节点，删除node节点
            if (node->num == nodenum) {
                printf("num:%d deleted!\n", node->num);
                if (!node->next) pre->next = NULL; //如果是尾结点, 删除node节点 这一段代码有问题
                else pre->next = node->next;
                free(node);
                return head;
            }
            //遍历找到节点
            pre = node;
            node = node->next;
        }

        //没找到的情况
        puts("Not found!");
        return head;
    }
}

int main()
{
     struct Student *creat(); //创建链表 
     void print(struct Student *head); //遍历链表 
     struct Student *delNode(struct Student *);//删除链表中的一个结点 
 
     struct Student *pt;
     pt=creat();
     print(pt);
     pt=delNode(pt);
     print(pt);
 
     return 0;
}