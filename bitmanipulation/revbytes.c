// reverse bytes of a number i.e., if number is ABCD print DBCA

#include<stdio.h>
#include"bitdisplay.h"
int main()
{
int a=0xABCD1234,result;
displaybits(a);
printf("%x\n",a);
result=((a&0x000000ff)<<24)|((a&0x0000ff00)<<8)|((a&0x00ff0000)>>8)|((a&0xff000000)>>24);
displaybits(result);
printf("%x\n",result);
return 0;
}

