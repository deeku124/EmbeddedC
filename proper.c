#include<stdio.h>
void isproper(int num)
{
int i,sum=0;
for(i=1;i<=num/2;i++)
{
if(num%i==0)
sum=sum+i;
}
printf("%d",sum);
(sum==num)?printf("proper\n"):printf("not proper\n");
}
int main()
{
int num;
printf("enter the number\n");
scanf("%d",&num);
isproper(num);
return 0;
}
