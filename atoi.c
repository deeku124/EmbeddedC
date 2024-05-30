#include<stdio.h>
int my_atoi(const char *str)
{
int sign=1,result=0;
while(*str==' ' || *str=='\n' || *str=='\t')
{
str++;
}
if(*str=='+' || *str=='-')
{
sign=(*str=='-')?-1:1;
str++;
}
while(*str>='0' && *str<='9')
{
result=result*10 +(*str-'0');
str++;
}
return sign*result;
}

int main()
{
const char *str="12345";
int a=my_atoi(str);
printf("%d",a);
return 0;
}
