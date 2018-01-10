#include<stdio.h>
void main()
{
int num,i,f=1;
printf("enter the number:");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
f=f*i;
}
printf("factorial of %d is %d:",num,f);
return 0;
}


