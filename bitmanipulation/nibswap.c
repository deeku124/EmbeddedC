//swappping right most nibble with left most nibble
#include<stdio.h>
#include"bitdisplay.h"
int main()
{
int a=0xABCD,result;
displaybits(a);
result=(a&0x0ff0)|((a&0x000f)<<12)|((a&0xf000)>>12);
displaybits(result);
return 0;
}

