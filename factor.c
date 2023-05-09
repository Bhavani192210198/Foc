#include<stdio.h>
int main()
{
	int i,num;
	printf("enter a value:");
	scanf("%d",&num);
	printf("factors of %d are:",num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d,",i);
		}
	}
}
