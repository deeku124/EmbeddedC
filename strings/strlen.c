#include<stdio.h>
#include<string.h>
void getlen(char str[])
{
int i=0;
while(str[i]!='\0')
{
i++;
}
printf("length of string is %d\n",i);
}

int getlenptr(char *strng)
{
char *p=strng;
while(*p!='\0')
{
p++;
}
return p-strng;
}
int main()
{
char str[100];
char *str1;
printf("enter a string\n");
scanf("%s",&str);
scanf("%s",&str1);
getlen(str);
int result=getlenptr(&str1);
printf("length of string is %d\n",result);
return 0;
}

