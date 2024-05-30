#include<stdio.h>
void display(char *str)
{
if(*str == '\0')
return;
putchar(*str);
display(str+1);
}

void revdisplay(char *str)
{
if(*str == '\0')
return;
revdisplay(str+1);
putchar(*str);
}
int main()
{
char str[10]="abcdefgh";
display(str);
printf("\n");
revdisplay(str);
printf("\n");
return 0;
}

