#include<bits\stdc++.h>
using namespace std;
int guess()
{
	int a,i = 1;
	srand((unsigned)time(NULL));
	a = rand() % 100 + 1;              //a为随机数
	int b;             //b为猜测数
	scanf("%d", &b);
	for (; a != b; i++)      //i统计猜测次数
	{
		if (b > a)
			printf("您猜的数大于该随机数\n");
		else
			printf("您猜的数小于该随机数\n");
		printf("请再猜一次！");
		scanf("%d", &b);
	}
	return i;
}
int main(void)
{
	int guess();
	int s=guess();         //s为猜测次数
	printf("您猜中了");
	if (s < 50)
		printf("666!\n");
	printf("猜测次数：");
	printf("%d",s);
	
}