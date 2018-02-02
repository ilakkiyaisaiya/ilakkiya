#include<stdio.h>
void main()
{
int f=0,s=1,i,n,next;
printf("enter the number:  ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
next=f+s;
f=s;
s=next;
}
printf("the fibonacci result is %d",next);
}
