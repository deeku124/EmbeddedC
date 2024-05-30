#include<stdio.h>
int main()
{
int num1=0,num2=1,n;
printf("enter the number of digits u wanna print in fibonacci series\n");
scanf("%d",&n);
while(n!=0)
{
printf("%d ",num1);
int next=num1+num2;
num1=num2;
num2=next;
n--;
}
return 0;
}
