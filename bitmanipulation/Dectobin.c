#include<stdio.h>
#include"bitdisplay.h"
void dectobin(int num)
{
int rem,bin=0,a=1;
while(num>0)
{
rem=num%2;
bin=a*bin+rem;
num=num/2;
a=a*10;
}
displaybits(bin);
}
int main()
{
int num;
printf("enter a number\n");
scanf("%d",&num);
dectobin(num);
return 0;
}

