#include<stdio.h>
#include<string.h>
char *str_chr(char *str,char ch)
{
int i=0;
char *ptr;
while(i!=strlen(str))
{
if(*(str+i)==ch)
{
ptr=(str+i);
return ptr;
}
i++;
}

int main()
{
char str[15];
printf("enter string\n");
scanf("%s",str);
printf("enter character\n");
scanf(" %c",&ch);
char *str1=str_chr(str,ch);
printf("%s",str1);
return 0;
}
