#include<stdio.h>
#include"displaybits.h"
void rotate(int num, int n)
{
int mask=(~(~0<<n))<<(32-n);
int result=(num<<n)|((num&mask)>>(32-n));
printf("%x\n",result);
}

int main()
{
int num,n,result;
printf("enter a hexadecimal number\n");
scanf("%x",&num);
printf("enter number of bits to rotate\n");
scanf("%d",&n);
rotate(num,n);
return 0;
}
