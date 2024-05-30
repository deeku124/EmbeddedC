#include<stdio.h>
int main()
{
char ch;
int i,num=0;
printf("enter a binary number\n");
for(i=0;i<31;i++)
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
printf("hexadecimal number %x\n",num);
return 0;
}
