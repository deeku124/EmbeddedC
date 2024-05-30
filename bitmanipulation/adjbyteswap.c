//swap adjacent bytes
#include<stdio.h>
#include"bitdisplay.h"
int main()
{
int a=0x12345678,result;
displaybits(a);
printf("%x\n",a);
result=((a&0x00ff00ff)<<8)|((a&~0x00ff00ff)>>8);
displaybits(result);
printf("%x\n",result);
return 0;
}

