#include<stdio.h>
void main()
{
int x=23,y=73;
x=x^y;
y=x^y;
x=x^y;
printf("the swapping numbers is %d%d",x,y);
}
