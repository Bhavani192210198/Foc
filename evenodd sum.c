#include<stdio.h>
int main()
{
	int i,n,evensum=0,oddsum=0;
	printf("enter a  number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%2==0)
		evensum=evensum+i;
		else
		oddsum=oddsum+i;
		printf("sum of all evennumbers=%d",evensum);
		printf("sum of all oddnumbers=%d",oddsum);
		return 0; 
	}
}
