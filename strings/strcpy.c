#include<stdio.h>
#include<string.h>
char *str_cpy(char *str1,char *str2)
{ 
int i=0;
while((*str1=*str2)!='\0')
{
str1++;
str2++;
}
return str1;
}


int main()
{
char str1[10],str2[10];
printf("enter first string\n");
scanf("%s",str1);
printf("enter second string\n");
scanf("%s",str2);
char *str3=str_cpy(str1,str2);
printf("%s\n",str3);
return 0;
}
