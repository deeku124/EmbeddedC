//swap bits at even positions with odd positions
#include<stdio.h>
#include"bitdisplay.h"
int main()
{
int a=0x12345678,result,count=0;
displaybits(a);
result=((a&0x5555)<<1)|((a&~0x5555)>>1);
displaybits(result);
return 0;
}

