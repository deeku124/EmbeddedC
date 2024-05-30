#include<stdio.h>
#include<string.h>
char *reverse(char *str,int a, int b)
{
while(a<=b)
{
char temp=*(str+a);
*(str+a)=*(str+b);
*(str+b)=temp;
a++;
b--;
}
}
char *str_rev(char *str,int start,int end)
{
int w_start,w_end;
for(w_start=w_end=start;w_end<end;w_end++)
{
if(str[w_end]==' ')
continue;
w_start=w_end;
while(str[w_end] != ' ' && w_end<=end)
w_end++;
w_end--;
reverse(str,w_start,w_end);
}
}


int main()
{
char str[]="I have many books";
int len=strlen(str);
printf("%s\n",str);
str_rev(str,0,len-1);
printf("%s\n",str);
return 0;
}
