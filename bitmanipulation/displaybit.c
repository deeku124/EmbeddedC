#include<stdio.h>
void displaybits(int a)
{
int i;
for(i=31;i>=0;i--)
{
int mask=1<<i;
putchar((a&mask)?'1':'0');
}
printf("\n");
}

