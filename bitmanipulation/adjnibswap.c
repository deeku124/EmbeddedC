//swap adjacent nibbles
#include<stdio.h>
#include"bitdisplay.h"
int main()
{
int a=0x12345678,result,count=0;
displaybits(a);
printf("%x\n",a);
result=((a&0x0f0f0f0f)<<4)|((a&0xf0f0f0f0)>>4);
displaybits(result);
printf("%x\n",result);
return 0;
}

