//counting set bits
#include<stdio.h>
#include"bitdisplay.h"
int main()
{
int a=0x22334,count=0,i;
displaybits(a);
for(i=31;i>=0;i--)
{
   if(a&(1<<i))
	count++;
}
printf("%d",count);
return 0;
}
