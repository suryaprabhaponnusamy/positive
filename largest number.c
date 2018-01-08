#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the value of a:%d",a);
scanf("%d",&a);
printf("Enter the value of b:%d",b);
scanf("%d",&b);
printf("Enter the value of c:%d",c);
scanf("%d",&c);
if((a>b)&&(a>c))
{
printf("a is largest");
}
else if((b>a)&&(b>c))
{
printf("b is largest");
}
else
{
printf("c is largest");
}
getch();
}
