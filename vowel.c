#include<stdio.h>
void main()
{
char c;
printf("enter an alphabet");
scanf("%ch",&c);
if((c=='a'||'e'||'i'||'o'||'u')||(c=='A'||'E'||'I'||'O'||'U'))
{
printf("c is a vowels");
}
else
{
printf("c is a consonants");
}
return 0;
}
