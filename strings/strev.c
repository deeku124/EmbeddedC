#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *str_rev(char *str)
{
int a=strlen(str)/2;
char temp;
int i=0,j=strlen(str)-1;
while(a!=0)
{
temp=*(str+i);
*(str+i)=*(str+j);
*(str+j)=temp;
a--;
}
return str;
}

int main()
{
char str[10];
printf("enter a string\n");
scanf("%s",str);
char *str1=str_rev(str);
printf("%s",str1);
return 0;
}
