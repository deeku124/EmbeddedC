#include<stdio.h>
#include<string.h>
char *str_cat(char *str1,char *str2)
{
char *p=str1;
while(*p!='\0')
{
p++;
}
while(*p++=*str2++);
return str1;
}
int main()
{
char str1[100],str2[100],*str;
printf("enter a string\n");
scanf("%s",str1);
printf("enter a string\n");
scanf("%s",str2);
str=str_cat(str1,str2);
printf("concatenated string is %s\n",str);
return 0;
}
