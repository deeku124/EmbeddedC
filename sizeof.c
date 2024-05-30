#include<stdio.h>
int main()
{
int a=20;
int *ptr=&a;
printf("%ld\n",(char *)(ptr+1)-(char *)ptr);
return 0;
}
