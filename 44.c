#include <stdio.h>
void main()
{
	int a[10],n,i;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n>=0&&n<=9)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
  }
