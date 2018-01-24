#include<stdio.h>
int main()
{
int s,a,l;
scanf("%d%d",&s,&a);
printf("the value of the numbers are s=%d,a=%d",s,a);
s=l;
l=a;
a=s;
printf("the value of numbers are s=%d,a=%d",s,a);
return 0;
}
