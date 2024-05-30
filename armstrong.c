#include<stdio.h>
int armstrong(int num)
{
int rem,cube,sum=0;
while(num!=0)
{
rem=num%10;
cube=rem*rem*rem;
sum=sum+cube;
num=num/10;
}
return sum;
}

int main()
{
int num;
printf("enter thr number\n");
scanf("%d",&num);
int arm=armstrong(num);
printf("%d",arm);
return 0;
}
