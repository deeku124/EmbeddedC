
//find if the number is power of 2 or not

#include<stdio.h>
#include"bitdisplay.h"
void powerof2(int a)
{
if(a&&!(a&(a-1)))
{
printf("given number %d is a power of 2",a);
}
else
{
printf("given number %d is not a power of 2",a);
}
}

int main()
{
int num;
printf("enter a number:\n");
scanf("%d",&num);
powerof2(num);
return 0;
}


