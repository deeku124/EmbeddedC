//find posn of rightmostset bit
#include<stdio.h>
#include"bitdisplay.h"
int main()
{
int a=0x22330,i;
displaybits(a);
for(i=0;i<=31;i++)
{
   if((a&(1<<i)))
	{break;}
		
}
printf("posn of rightmost set bit is %d",i);
return 0;
}
