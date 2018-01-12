#include<stdio.h>
void main()
{
int num,count=0;
printf("enter a num");
scanf("%d",&num);
while(num!=0)
{
n=n/10;
count=count+1;
}
printf("number of digits in an number=%d",count);
return 0;
}
