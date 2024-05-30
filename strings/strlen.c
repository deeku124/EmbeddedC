#include<stdio.h>
#include<string.h>
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
char str1[100];
printf("enter a string\n");
scanf("%s",str1);
int result=getlenptr(str1);
printf("length of string is %d\n",result);
return 0;
}
