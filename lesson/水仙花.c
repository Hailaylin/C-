#include<stdio.h>
#include<math.h>
int main()
{
	int i = 100,s=0;
	for (; i < 1000; i++)
	{
		s = pow((i % 1000)/100, 3)+ pow((i % 100)/10, 3)+ pow(i % 10, 3);
		if (i == s)
			printf("%d ", s);
	}
}