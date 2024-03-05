#include<stdio.h>
void display(int num)
{
int i;
for(i=31;i>=0;i--)
{
printf("%c",num&(1<<i)?'1':'0');
if(i%4==0)
  printf("\t");
}
printf("\n");
}


int main()
{
int num=0x45267874,i;
display(num);
int a=(num&0xf0)>>4;
num=num&~0xf0;
for(i=7;i>=4;i--)
{
num=num|((a&1)<<i);
a=a..1;
}
display(num);
