include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
if((n%100)||(n%400)||(n%4))
{
printf("leap year");
}
else
{
printf("not a leap year");
}
}
