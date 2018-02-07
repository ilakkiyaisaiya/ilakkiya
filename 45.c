#include<stdio.h>
void main()
{
int a=0,i;
printf("enter the number: \n");
scanf("%d",&a);
while(a!=0)
{
    a=a/10;
    ++i;
}
    printf("count number is :%d",i);
}

