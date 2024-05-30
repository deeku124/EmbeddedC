// swap 0,1st bits with 4,5th bits
#include<stdio.h>
#include"bitdisplay.h"
int main()
{
int a=0xABCD,result;
displaybits(a);
result=(a&0xFFCC)|((a&~0xFFFC)<<4)|((a&~0xFFCF)>>4);
displaybits(result);
return 0;
}

