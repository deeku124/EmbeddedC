#include<stdio.h>
int rec_vowel(char *str)
{
if(*str=='\0')
return 0;

int count=0;
if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u')
count++;
return count+rec_vowel(str+1);
}
int main()
{
char str[25];
printf("enter a string\n");
scanf("%s",str);
int count=rec_vowel(str);
printf("%d",count);
return 0;
}
