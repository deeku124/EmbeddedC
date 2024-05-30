#include<stdio.h>
int str_n_cmp(char *str1,char *str2)
{
while((*str1==*str2))
{
if(*str1=='\0')
return 0;
str1++;
str2++;
}
return (str1-str2);
}


int main()
{
char str1[20],str2[20];
int n;
printf("enter string 1\n");
scanf("%s",str1);
printf("enter string 2\n");
scanf("%s",str2);
printf("enter no.of characters to compare\n");
scanf("%d",&n);
int res=str_n_cmp(str1,str2);
(res==0)?printf("same\n"):printf("diff\n");
return 0;
}

