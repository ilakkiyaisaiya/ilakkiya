#include <stdio.h>
#include<string.h>
void main()
{
	char a[20],b[20];
	int c,d;
	printf("\n enter the two strings");
	scanf("%s %s",&a,&b);
	c=strlen(a);
	d=strlen(b);
	if(c>=d)
	{
		printf("\n %s",a);
	}
	else
	{
	printf("\n %s",b);
	}
}
    
