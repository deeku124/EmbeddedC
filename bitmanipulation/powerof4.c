//finding given no is power of 4 or not
#include<stdio.h>
#include"bitdisplay.h"
void powerof4(int a)
{
int i;
if(a&(a-1))
{
	printf("given number is not a power of 4");
}
else
{
	for(i=0;i<=31;i++)
	{
	if(a&(1<<i))
	{break;}
	}
	if(i%2==0)
	{
	   printf("given number is a power of 4");
	}
	else
	   printf("given number is not a power of 4");
	
}
}

int main()
{
int num;
printf("enter a number:\n");
scanf("%d",&num);
powerof4(num);
return 0;
}

