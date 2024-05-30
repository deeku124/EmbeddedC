#include<stdio.h>
int main()
{
int a=0x11223344,i;
char *c=(char *)&a;
for(i=0;i<4;i++)
{
printf("byte %x and address %p\n",c[i],&c[i]);
}
(*c==0x44)?printf("little endian\n"):printf("big endian\n");
return 0;
}


