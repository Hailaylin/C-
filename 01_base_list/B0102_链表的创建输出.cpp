/*
   C++与面向对象程序设计	 
题号：B0102        题目:链表的创建与输出        得分：0  
  
作业提交截止时间：2021/7/23 0:00:00	 
 	
题目内容：
练习链表的创建与输出。
1、结构体变量定义如下：
struct Student
{
    int num;
    float score;
    struct Student *next;
};

2、输出实数a时保留2位小数的方法：
#include <iomanip>
（1） cout<<setiosflags(ios::fixed)<<setprecision(2);
           cout<<a<<endl;
（2）cout<<setiosflags(ios::fixed);  cout<<setprecision(2)<<a<<endl;
（3）cout.setf(ios::fixed);     cout.precision(2);     cout<<a<<endl;
（4）cout<<fixed<<setprecsion(2)<<a<<endl; //建议采用

3、使用malloc函数时，需文件包含 #include<cstdlib>

4、例：
（1）输入：0 0 输出：Empty!
（2）输入：
1001 99
1002 89
1006 78
1004 97
0 0
输出：
Scores are:
num:1001,score:99.00
num:1002,score:89.00
num:1006,score:78.00
num:1004,score:97.00

 请注意，main()函数必须按如下所示编写：
int main()
{
     struct Student *creat();
     void print(struct Student *head);
 
     struct Student *pt;
     pt=creat();
     print(pt);
 
     return 0;
}

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。
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
list *creat(void)
{
    //创建节点。
    list *node = (list *)malloc(sizeof(list));
    list *head = node; 
    scanf("%d %f", &node->num, &node->score);
    //结束创建
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

void print(struct Student *head)
{
    //if (head->next) return (void)(0);
    if (head == NULL)  return (void)(0);
    puts("Scores are:");
    struct Student *p=head;
    while (p->next != 0){
        printf("num:%d,score:%.2f\n", p->num, p->score);
        p=p->next;
    }
}

int main()
{
    struct Student *creat();
    void print(struct Student *head);

    struct Student *pt;
    pt=creat();
    print(pt);

    return 0;
}
