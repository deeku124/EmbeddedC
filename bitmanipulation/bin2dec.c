#include<stdio.h>
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
  printf("enter a valid binary number\n");
  }
}
printf("%d\n",num);
printf("hexadecimal number %x\n",num);
return 0;
}
