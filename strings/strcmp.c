#include<stdio.h>
#include<string.h>
int str_cmp(char *str1,char *str2)
{
while(*str1==*str2)
{
if(*str1=='\0')
	return 0;
str1++;
str2++;
}
return(*str1-*str2);
}
int main()
{
char *str1,*str2;
printf("enter first string\n");
scanf("%s",&str1);
printf("enter second string\n");
scanf("%s",&str2);
int result=str_cmp(&str1,&str2);
if(result==0)
{
printf("both strings are same\n");
}
else
{
printf("the strings are not same\n");
}
return 0;
}
