#include<stdio.h>
void main()
{
int i,N,sum=0;
printf("enter a number");
scanf("%d",&N);
for(i=0;i<=N;i++)
{
sum+=i;
}
printf("sum of natural number=%d",N,sum);
return 0;
}
