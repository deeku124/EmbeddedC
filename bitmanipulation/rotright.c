#include<stdio.h>
#include"bitdisplay.h"

int main()
{
int a=58585,numb,result1,result2,result;
displaybits(a);
printf("%x\n",a);
printf("no.of positions you wanna rotate your number\n");
scanf("%d",&numb);
result1=(a>>numb);
result2=(a<<(32-numb));
displaybits(result1);
displaybits(result2);
printf("%x\n",result1);
printf("%x\n",result2);
result=result1|result2;
displaybits(result);
printf("%x\n",result);
return 0;
}

