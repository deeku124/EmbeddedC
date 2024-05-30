
#include<stdio.h>
#include"bitdisplay.h"
void rotright(int num, int n)
{
int mask=~(~0<<(32-n));
int result=((num&mask)<<(32-n))|(num>>n);
printf("%x\n",result);
displaybits(result);
}
int main()
{
int num=0x11223344,p;
displaybits(num);
printf("%x\n",num);
printf("no.of positions you wanna rotate your number\n");
scanf("%d",&p);
rotright(num,p);
return 0;
}
