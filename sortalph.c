#include<stdio.h>
#include<string.h>
char to_lower(char ch)
{
if(ch>=65 && ch<=91)
ch=ch+32;
return ch;
}
void sortalph(char *str)
{
int i,j;
int n=strlen(str)-1;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(to_lower(str[i])>to_lower(str[j]))
{
char temp=str[i];
str[i]=str[j];
str[j]=temp;
}
}
}
printf("%s",str);
}

int main()
{
char str[20];
printf("enter string\n");
scanf("%s",str);
sortalph(str);
return 0;
}
