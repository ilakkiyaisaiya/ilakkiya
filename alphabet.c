#include<stdio.h>
void main()
{
char n;
scanf("%c",&n);
if((n>='a')&&(n<='z'))||((n>='A')&&(n<='z'))
{
printf("  alphabet");
}
else
{
printf("not an alphabet");
}
}
