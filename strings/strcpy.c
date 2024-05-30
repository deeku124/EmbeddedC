// Online C compiler to run C program online
#include <stdio.h>
char *str_cpy(char *str1,char *str2)
{
    while(*str1++=*str2++);
    return str1;
}
int main() {
    char str1[10],str2[10];
    printf("enter string\n");
    scanf("%s",str2);
    str_cpy(str1,str2);
    printf("%s",str1);
    return 0;
}
