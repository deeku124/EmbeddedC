#include<stdio.h>
void reverse(int num)
{
int rev=0,rem;
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num/=10;
}
printf("%d\n",rev);
}

int main()
{
int num;
printf("enter a number\n");
scanf("%d",&num);
reverse(num);
return 0;
}

