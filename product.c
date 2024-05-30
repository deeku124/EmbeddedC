#include<stdio.h>

int product(int num)
{
int prod=1,rem;
while(num!=0)
{
rem=num%10;
prod=prod*rem;
num=num/10;
}
return prod;
}
int main()
{
int num;
printf("enter number\n");
scanf("%d",&num);
int res=product(num);
printf("%d",res);
return 0;
}

