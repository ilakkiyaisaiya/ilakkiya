#include<stdio.h>
void main()
{
int b,e;
int result=0;
scanf("%d%d",&b,&e);
while(e!=0)
{
result=b*b;
--e;
}
printf("power is %d",result);
}
