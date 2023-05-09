#include<stdio.h>
int mian()
{
	int i,n,sum;
	printf("enter an odd number:");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	sum += i;
	printf("sum of odd numbers = %d",n,sum);
	return 0;
}
