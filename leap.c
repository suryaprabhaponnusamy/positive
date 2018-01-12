#include<stdio.h>
void main()
{
int num;
printf("enter a number");
scanf("%d",&num);
if(num%4==0)
{
printf("leap year");
}
else
{
printf("no leap year");
}
return 0;
}
