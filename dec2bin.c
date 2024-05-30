#include<stdio.h>
void bin2dec(int num)
{
int a=1,bin=0;
while(num!=0)
{
int rem=num%2;
bin=bin+a*rem;
num=num/2;
a=a*10;
}
printf("%d\n",bin);
}
int main()
{
int num;
printf("enter a number\n");
scanf("%d",&num);
bin2dec(num);
return 0;
}
