#include<stdio.h>
#include<string.h>
int countvowels(char *str)
{
int count=0;
while(*str != '\0')
{
if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u')
count++;
str++;
}
return count;
}
int main()
{
char str[15];
printf("enter string\n");
scanf("%s",str);
int count=countvowels(str);
printf("vowels in %s are %d",str,count);
return 0;
}

