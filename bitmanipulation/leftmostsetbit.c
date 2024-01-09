//find leftmost set bit and set all bits to the right to it
#include<stdio.h>
#include"bitdisplay.h"
int main()
{
int a=0x88669,result,count=0;
displaybits(a);
while(a!=0)
{
	
	count++;
	a>>=1;	
}
result=(1<<count)-1;

displaybits(result);
return 0;
}

