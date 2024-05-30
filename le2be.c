#include<stdio.h>
int main()
{
int a=0x11223344,i;
char *c=(char *)&a;
for(i=0;i<4;i++)
{
printf("%x byte in %p Address\n",c[i],&c[i]);
}
int result=((a&0x000000ff)<<24)|((a&0x0000ff00)<<8)|((a&0x00ff0000)>>8)|((a&0xff000000)>>24);
char *ch=(char *)&result;
for(i=0;i<4;i++)
{
printf("%x byte in %p Address\n",ch[i],&ch[i]);
}
return 0;
}
