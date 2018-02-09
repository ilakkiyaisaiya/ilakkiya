#include<stdio.h>
int main()
{
int c,i,min,max;
int b[10];
scanf("%d",&c);
for(i=0;i<c;i++)
{
scanf("%d",&b[i]);
}
min=max=b[0];
for(i=0;i<c;i++)
{
if(b[i]<min)
{
min=b[i];
}
}
printf("%d\t",min);
for(i=0;i<c;i++)
{
if(b[i]>max)
{
max=b[i];
}
}
printf("%d",max);
return0;
}
