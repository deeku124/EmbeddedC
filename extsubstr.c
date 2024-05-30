#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *extsubstr(char *str,int p, int no)
{
int j=0;
char *ptr=(char *)malloc((p+no)*sizeof(char));
while(p<no)
{
ptr[j++]=str[p++];
}
ptr[j]='\0';
return ptr;
}


int main()
{
char str[20];
int p,no;
printf("enter string\n");
scanf("%s",str);
printf("enter the start posn of string u wanna extracct\n");
scanf("%d",&p);
printf("no.of characters that u wanna extract\n");
scanf("%d",&no);
char *ptr=extsubstr(str,p,no);
printf("%s",ptr);
return 0;
}
