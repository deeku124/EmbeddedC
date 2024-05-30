#include<stdio.h>
int main()
{
int a=8,b=16;
printf("a=%d and b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d and b=%d\n",a,b);
return 0;
}
