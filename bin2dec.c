#include<stdio.h>
int main()
{
int num=0,i;
char ch;
printf("enter a number\n");
for (i=0;i<=31;i++)
{
ch=getchar();
if(ch=='0')
{
num=num<<1;
}
else if(ch=='1')
{
num=(num<<1)+1;
}
else 
{
break;
}
}
printf("%d\n",num);
return 0;
}
