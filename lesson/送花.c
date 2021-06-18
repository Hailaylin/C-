#include<stdio.h>
#include<math.h>
int main(void)
{
	long long int sum = 0;
	int i = 0;
	for (; i <= 29; i++)
	{
		sum += pow(2, i);
	}
	printf("sum=");
	printf("%lld", sum);
}