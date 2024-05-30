// reverse 1st 2nd 3rd bits of a given number
#include <stdio.h>
void display(int num)
{
    int i;
    for(i=31;i>=0;i--)
    {
        printf("%c",num&(1<<i)?'1':'0');
        if(i%4==0)
        printf("\t");
    }
    printf("\n");
}
int main() {
int a=0x23457657;
display(a);
int result=(a&~0xe)|((a&0x2)<<2)|((a&0x4))|((a&0x8)>>1);
display(result);
    return 0;
}
